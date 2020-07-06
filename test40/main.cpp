#include <iostream>
using namespace std;


struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL)
            return NULL;
        int delta1 = p->val-root->val;
        int delta2 = q->val-root->val;
        if(delta1*delta2<=0)
            return root;
        if(delta1<0)
            return lowestCommonAncestor(root->left,p,q);
        else
            return lowestCommonAncestor(root->right,p,q);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
