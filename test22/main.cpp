#include <iostream>
#include <queue>
#include <deque>

using namespace std;

class MaxQueue {
    queue<int> q;
    deque<int> d;
public:
    MaxQueue() {

    }

    int max_value() {
        if(q.empty())
            return -1;
        return d.front();
    }

    void push_back(int value) {
        while (!d.empty()&&d.back() < value)
            d.pop_back();
        d.push_back(value);
        q.push(value);
    }

    int pop_front() {
        if(q.empty())
            return -1;
        int ans = q.front();
        if(ans == d.front())
            d.pop_front();
        q.pop();
        return ans;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
