#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int popindex = 0;
        for(int i = 0; i < pushed.size(); ++i)
        {
            s.push(pushed[i]);
            while(s.empty() == false)
            {
                if(s.top() == popped[popindex])
                {
                    s.pop();
                    ++popindex;
                }
                else
                    break;
            }
        }
        if(s.empty())
            return true;
        else
            return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
