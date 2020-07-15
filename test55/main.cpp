#include <iostream>
using namespace std;

class Solution {
public:
    int add(int a, int b) {
        if(b == 0)
            return a;
        return add(a^b,(unsigned int)(a&b) << 1);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
