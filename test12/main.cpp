#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> que;
        if(root!=NULL)
        {
            que.push(root);
            bool flag = true;
            while(que.empty() == false)
            {
                vector<int> temp;
                int size = que.size();
                for(int i = 0; i < size; ++i)
                {
                    TreeNode* node = que.front();
                    que.pop();
                    temp.push_back(node->val);
                    if(node->left!=NULL)
                        que.push(node->left);
                    if(node->right!=NULL)
                        que.push(node->right);
                }
                if(flag == false)
                    reverse(temp.begin(),temp.end());
                flag = !flag;
                res.push_back(temp);
            }
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

