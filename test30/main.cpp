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
    int maxDepth(TreeNode* root) {
        return dfs(root);
    }
    int dfs(TreeNode* t)
    {
        if(t == NULL)
            return 0;
        return 1+max(dfs(t->left),dfs(t->right));
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
