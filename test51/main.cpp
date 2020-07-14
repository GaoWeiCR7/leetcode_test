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
    bool isBalanced(TreeNode* root) {
        if(root == nullptr)
            return true;
        int d1 = depth(root->left);
        int d2 = depth(root->right);
        if(abs(d1-d2)>1)
            return false;
        else
            return isBalanced(root->left)&&isBalanced(root->right);
    }
    int depth(TreeNode* t)
    {
        if(t == nullptr)
            return 0;
        return 1+max(depth(t->left),depth(t->right));
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
