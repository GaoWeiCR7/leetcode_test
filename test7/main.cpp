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
    vector<int> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> vec;
        if(root!=NULL)
        {
            q.push(root);
            while(q.empty() == false)
            {
                TreeNode* temp = q.front();
                q.pop();
                vec.push_back(temp->val);
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
            }
        }
        return vec;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
