#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int nthUglyNumber(int n) {
        int a = 0;
        int b = 0;
        int c = 0;
        vector<int> ret(n,0);
        ret[0] = 1;
        for(int i = 1; i < n; ++i)
        {
            int t1 = ret[a]*2;
            int t2 = ret[b]*3;
            int t3 = ret[c]*5;
            int temp = min(min(t1,t2),t3);
            ret[i] = temp;
            if(t1 == temp)
                ++a;
            if(t2 == temp)
                ++b;
            if(t3 == temp)
                ++c;
        }
        return ret[n-1];
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
