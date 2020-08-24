#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMagicIndex(vector<int>& nums) {
        if(nums.size() == 0)
            return -1;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] == i)
                return i;
            else if(nums[i] > i+1)
                i = nums[i]-1;
        }
        return -1;
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
