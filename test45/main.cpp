#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        int size1 = 0;
        int size2 = 0;
        while(temp1)
        {
            size1++;
            temp1 = temp1->next;
        }
        while(temp2)
        {
            size2++;
            temp2 = temp2->next;
        }
        temp1 = headA;
        temp2 = headB;
        if(size1 == 0||size2 == 0)
            return NULL;
        if(size1>size2)
        {
            int delta = size1-size2;
            for(int i = 0; i < delta; ++i)
                temp1 = temp1->next;
            while(temp1&&temp2)
            {
                if(temp1 == temp2)
                    return temp1;
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
        else
        {
            int delta = size2-size1;
            for(int i = 0; i < delta; ++i)
                temp2 = temp2->next;
            while(temp1&&temp2)
            {
                if(temp1 == temp2)
                    return temp1;
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
        return NULL;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
