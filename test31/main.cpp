#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
    vector<int> printNumbers(int n) {
        int max = pow(10,n);
        vector<int> ret;
        for(int i = 1; i < max; ++i)
            ret.push_back(i);
        return ret;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
