#include <iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ret = 0;
        while(n!=0)
        {
            if(n%2 == 1)
                ret++;
            n = n >> 1;
        }
        return ret;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
