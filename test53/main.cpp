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
public:
    bool isSymmetric(TreeNode* root) {
        vector<int> arr1,arr2;
        preorder(root,arr1);
        clippreorder(root,arr2);
        if(arr1 == arr2)
            return true;
        return false;
    }
    void preorder(TreeNode* root,vector<int> &arr)
    {
        if(root == nullptr)
            return;
        arr.push_back(root->val);
        if(root->left == nullptr&&root->right!= nullptr)
            arr.push_back(-1);
        preorder(root->left,arr);
        if(root->right == nullptr&&root->left!= nullptr)
            arr.push_back(-1);
        preorder(root->right,arr);
    }
    void clippreorder(TreeNode* root,vector<int> &arr)
    {
        if(root == nullptr)
            return;
        arr.push_back(root->val);
        if(root->right == nullptr&&root->left!= nullptr)
            arr.push_back(-1);
        clippreorder(root->right,arr);
        if(root->left == nullptr&&root->right!= nullptr)
            arr.push_back(-1);
        clippreorder(root->left,arr);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
