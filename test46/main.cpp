#include <iostream>
using namespace std;

class Solution {
public:
    int lastRemaining(int n, int m) {
        int res = 0;
        for(int i = 2; i <= n; ++i)
            res = (res+m)%i;
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
