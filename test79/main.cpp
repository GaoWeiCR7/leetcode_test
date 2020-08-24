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
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        int lenA = 0;
        int lenB = 0;
        while(tempA)
        {
            ++lenA;
            tempA = tempA->next;
        }
        while(tempB)
        {
            ++lenB;
            tempB = tempB->next;
        }
        int delta = abs(lenB-lenA);
        tempA = headA;
        tempB = headB;
        if(lenA >= lenB)
        {
            for(int i = 0; i < delta; ++i)
                tempA = tempA->next;
            while(tempA)
            {
                if(tempA == tempB)
                    return tempA;
                tempA = tempA->next;
                tempB = tempB->next;
            }
        }
        else
        {
            for(int i = 0; i < delta; ++i)
                tempB = tempB->next;
            while(tempA)
            {
                if(tempA == tempB)
                    return tempA;
                tempA = tempA->next;
                tempB = tempB->next;
            }
        }
        return nullptr;
    }
    /*
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while(tempA!=tempB)
        {
            if(tempA == NULL)
                tempA = headB;
            else
                tempA = tempA->next;
            if(tempB == NULL)
                tempB = headA;
            else
                tempB = tempB->next;
        }
        return tempA;
    }
     */
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
