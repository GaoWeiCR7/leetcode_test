#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> constructArr(vector<int>& a) {
        vector<int> res(a);
        int left = 1;
        int right = 1;
        for(auto i = 0; i < a.size(); ++i)
        {
            res[i] = left;
            left = left*a[i];
        }
        for(int i = a.size()-1;i >= 0; --i)
        {
            res[i] = res[i]*right;
            right = right*a[i];
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
