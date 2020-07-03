#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> ret;
        while(head)
        {
            ret.push_back(head->val);
            head = head->next;
        }
        reverse(ret.begin(),ret.end());
        return ret;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
