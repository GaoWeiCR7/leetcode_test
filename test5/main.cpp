#include <iostream>
#include <vector>
using namespace std;

//Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* root = NULL;
        if(preorder.size()!=0)
        {
            root = new TreeNode(preorder[0]);
            for(int i = 0; i < inorder.size(); ++i)
            {
                if(inorder[i] == preorder[0])
                {
                    vector<int> left(inorder.begin(),inorder.begin()+i);
                    vector<int> pre1(preorder.begin()+1,preorder.begin()+1+i);
                    root->left = buildTree(pre1,left);
                    vector<int> right(inorder.begin()+i+1,inorder.end());
                    vector<int> pre2(preorder.begin()+1+i,preorder.end());
                    root->right = buildTree(pre2,right);
                }
            }
        }
        return root;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
