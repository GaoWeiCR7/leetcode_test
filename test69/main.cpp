#include <iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    int kthToLast(ListNode* head, int k) {
        ListNode* fast = head;
        for(int i = 0; i < k; ++i)
            fast = fast->next;
        while(fast!= nullptr)
        {
            fast = fast->next;
            head = head->next;
        }
        return head->val;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
