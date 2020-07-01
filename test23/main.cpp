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
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if(A == NULL||B == NULL)
            return false;
        if(havesub(A,B) == false)
            return isSubStructure(A->left,B)||isSubStructure(A->right,B);
        else
            return true;
    }
    bool havesub(TreeNode* A, TreeNode* B)
    {
        if(B == NULL)
            return true;
        if(A == NULL)
            return false;
        if(A->val == B->val)
            return havesub(A->left,B->left)&&havesub(A->right,B->right);
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
