#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* removeDuplicateNodes(ListNode* head) {
        unordered_set<int> set;
        ListNode* pre = head;
        ListNode* temp = head;
        while(temp)
        {
            if(set.find(temp->val)!=set.end())
            {
                pre->next = temp->next;
                delete temp;
                temp = pre->next;
            }
            else
            {
                set.insert(temp->val);
                pre = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
