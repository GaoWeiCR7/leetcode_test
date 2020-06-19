#include <iostream>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* current = head;
        Node* rethead = NULL;
        Node* rettail = NULL;
        while(current!=NULL)
        {
            if(rethead!=NULL)
            {
                Node* temp = new Node(current->val);
                rettail->next = temp;
                rettail = temp;
            }
            else
            {
                Node* temp = new Node(current->val);
                rethead = temp;
                rettail = temp;
            }
            current = current->next;
        }
        current = head;
        rettail = rethead;
        while(current!=NULL)
        {
            Node* p1 = head;
            Node* p2 = rethead;
            while(p1!=NULL)
            {
                if(p1 == current->random)
                    rettail->random = p2;
                p1 = p1->next;
                p2 = p2->next;
            }
            current = current->next;
            rettail = rettail->next;
        }
        return rethead;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
