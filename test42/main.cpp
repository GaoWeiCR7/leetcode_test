#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        unordered_set<int> s;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(s.insert(nums[i]).second == false)
                return nums[i];
        }
        return -1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
