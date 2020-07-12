#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> ret(nums.size(),0);
        ret[0] = nums[0];
        for(auto i = 1; i < nums.size(); ++i)
            ret[i] = ret[i-1]>0?(ret[i-1]+nums[i]):nums[i];
        return *max_element(ret.begin(),ret.end());
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
