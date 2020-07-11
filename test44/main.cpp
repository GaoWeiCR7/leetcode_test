#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*class Solution {
public:
    static bool cmp(int a, int b)
    {
        int x1 = a&1;
        int x2 = b&1;
        if(x1 == x2)
            return false;
        return x1;
    }
    vector<int> exchange(vector<int>& nums) {
        sort(nums.begin(),nums.end(),cmp);
        return nums;
    }
};*/


class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int fast = 0;
        int slow = 0;
        while(fast < nums.size())
        {
            if(nums[fast]&1 == 1)
            {
                swap(nums[fast],nums[slow]);
                slow++;
            }
            fast++;
        }
        return nums;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
