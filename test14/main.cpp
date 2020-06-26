#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> ret;
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> vec;
        dfs(root,sum,vec);
        return ret;
    }
    void dfs(TreeNode* root,int num,vector<int> temp)
    {
        if(root == NULL)
            return;
        temp.push_back(root->val);
        num -= root->val;
        if(num == 0&&root->left == NULL&&root->right == NULL)
            ret.push_back(temp);
        dfs(root->left,num,temp);
        dfs(root->right,num,temp);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
