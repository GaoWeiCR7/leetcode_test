#include <iostream>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        int size = 0;
        ListNode* temp = head;
        while(temp)
        {
            size++;
            temp = temp->next;
        }
        temp = head;
        for(int i = 0; i < size-k; ++i)
            temp = temp->next;
        return temp;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
