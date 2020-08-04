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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0)
            return nullptr;
        return Bst(nums,0,nums.size()-1);
    }
    TreeNode* Bst(vector<int> nums,int begin, int end)
    {
        if(begin > end)
            return nullptr;
        int m = (begin+end)/2;
        TreeNode* temp = new TreeNode(nums[m]);
        temp->left = Bst(nums,begin,m-1);
        temp->right = Bst(nums,m+1,end);
        return temp;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
