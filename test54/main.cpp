#include <iostream>
#include <stack>
using namespace std;

class MinStack {
    stack<int> datastack;
    stack<int> minstack;
public:
    MinStack() {

    }

    void push(int x) {
        datastack.push(x);
        if(minstack.empty())
            minstack.push(x);
        else
        {
            if(minstack.top()>=x)
                minstack.push(x);
        }
    }

    void pop() {
        if(datastack.empty())
            return;
        int x = datastack.top();
        datastack.pop();
        if(minstack.top() == x)
            minstack.pop();
    }

    int top() {
        if(datastack.empty())
            return -1;
        return datastack.top();
    }

    int min() {
        if(datastack.empty())
            return -1;
        return minstack.top();
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
