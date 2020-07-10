#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ret = INT32_MIN;
        int times = 0;
        for(int i = 0; i <nums.size(); ++i)
        {
            if(times == 0)
                ret = nums[i];
            if(ret == nums[i])
                times++;
            else
                times--;
        }
        return ret;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
