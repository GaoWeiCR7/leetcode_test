#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

class Solution {
public:
    int cuttingRope(int n) {
        if(n == 2)
            return 1;
        if(n == 3)
            return 2;
        if(n%3 == 0)
            return pow(3,n/3);
        if(n%3 == 1)
            return 2*2*pow(3,(n-4)/3);
        if(n%3 == 2)
            return 2*pow(3,(n-2)/3);
        return 0;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
