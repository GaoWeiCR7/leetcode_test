#include <iostream>
using namespace std;
class Solution {
public:
    int sumNums(int n) {
        n &&(n += sumNums(n-1));
        return n;
    }
};

int main()
{
    Solution sol;
    int n;
    cin >> n;
    cout << sol.sumNums(n) << endl;
    return 0;
}
