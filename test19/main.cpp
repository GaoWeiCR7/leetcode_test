#include <iostream>
#include <stack>
using namespace std;

class CQueue {
private:
    stack<int> s1,s2;
public:
    CQueue() {

    }

    void appendTail(int value) {
        s1.push(value);
    }

    int deleteHead() {
        if(s2.empty())
        {
            while(s1.empty() == false)
            {
                int temp = s1.top();
                s1.pop();
                s2.push(temp);
            }
        }
        if(s2.empty())
            return -1;
        int ret = s2.top();
        s2.pop();
        return ret;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
