#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
    vector<int> ret;
public:
    int kthLargest(TreeNode* root, int k) {
        inorderdfs(root);
        return ret[ret.size()-k];
    }
    void inorderdfs(TreeNode* t)
    {
        if(t == NULL)
            return;
        inorderdfs(t->left);
        ret.push_back(t->val);
        inorderdfs(t->right);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
