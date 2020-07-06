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
        if(root == NULL||root == p || root == q)
            return root;
        TreeNode* temp1 = lowestCommonAncestor(root->left,p,q);
        TreeNode* temp2 = lowestCommonAncestor(root->right,p,q);
        if(temp1 == NULL&&temp2 == NULL)
            return NULL;
        if(temp1 == NULL)
            return temp2;
        if(temp2 == NULL)
            return temp1;
        return root;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
