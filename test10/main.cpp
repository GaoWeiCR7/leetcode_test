#include <iostream>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};
class Solution {
public:
    Node* treeToDoublyList(Node* root) {
        if(root == NULL)
            return NULL;
        Node* head = NULL;
        Node *pre = NULL;
        dfsinorder(root,head,pre);
        head->left = pre;
        pre->right = head;
        return head;
    }

    void dfsinorder(Node* t, Node* &head, Node* &pre)
    {
        if(t == NULL)
            return;
        dfsinorder(t->left,head,pre);
        if(head == NULL)
            head = t;
        else
        {
            pre->right = t;
            t->left = pre;
        }
        pre = t;
        dfsinorder(t->right,head,pre);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
