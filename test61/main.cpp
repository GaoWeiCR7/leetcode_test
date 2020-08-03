#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(nums.size() == 0)
            return vector<int>{};
        vector<int> ret;
        deque<int> de;
        de.push_back(nums[0]);
        for(int i = 1; i < k; ++i)
        {
            while(!de.empty()&&de.back()<nums[i])
                de.pop_back();
            de.push_back(nums[i]);
        }
        for(int i = k; i < nums.size(); ++i)
        {
            int x = de.front();
            if(x == nums[i - k])
                de.pop_front();
            ret.push_back(x);
            while(!de.empty()&&de.back()<nums[i])
                de.pop_back();
            de.push_back(nums[i]);
        }
        ret.push_back(de.front());
        return ret;
    }

};

int main() {
    vector<int> x{1,3,-1,-3,5,3,6,7};
    Solution s;
    s.maxSlidingWindow(x,3);
    return 0;
}
