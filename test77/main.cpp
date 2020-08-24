#include <iostream>
using namespace std;

class Solution {
public:
    int exchangeBits(int num) {
        int a = (num&0xaaaaaaaa)>>1;
        int b = (num&0x55555555)<<1;
        return a|b;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
