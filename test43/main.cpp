#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int front = 0;
        int tail = nums.size()-1;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[front]+nums[tail] > target)
                tail--;
            else if(nums[front]+nums[tail] < target)
                front++;
            else
                return {nums[front],nums[tail]};
        }
        return {nums[front],nums[tail]};
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
