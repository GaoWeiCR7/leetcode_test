#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int begin = 0;
        int end = nums.size()-1;
        while(begin <= end)
        {
            int m = (begin+end)/2;
            if(nums[m] == m)
                begin = m + 1;
            else
                end = m - 1;
        }
        return begin;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
