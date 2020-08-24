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
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    vector<ListNode*> listOfDepth(TreeNode* tree) {
        if(tree == nullptr)
            return vector<ListNode*>{};
        vector<ListNode*> ret;
        queue<TreeNode*> q;
        q.push(tree);
        while(q.empty() == false)
        {
            int len = q.size();
            ListNode* head = nullptr;
            ListNode* tail = nullptr;
            while(len > 0)
            {
                TreeNode* t = q.front();
                q.pop();
                if(head == nullptr)
                {
                    head = new ListNode(t->val);
                    tail = head;
                }
                else
                {
                    tail->next = new ListNode(t->val);
                    tail = tail->next;
                }
                if(t->left!= nullptr)
                    q.push(t->left);
                if(t->right!= nullptr)
                    q.push(t->right);
                len--;
            }
            ret.push_back(head);
        }
        return ret;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
