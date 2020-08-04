#include <iostream>
using namespace std;

class Solution {
public:
    int maximum(int a, int b) {
        long x = (long)a+b;
        long y = abs((long)a-(long)b);
        return (x+y)/2;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
