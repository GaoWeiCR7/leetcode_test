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
    TreeNode* mirrorTree(TreeNode* root) {
        if(root == NULL)
            return NULL;
        preorderdfs(root);
        return root;
    }
    void preorderdfs(TreeNode* t)
    {
        if(t == NULL)
            return;
        TreeNode* temp = t->left;
        t->left = t->right;
        t->right = temp;
        preorderdfs(t->left);
        preorderdfs(t->right);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
