#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Solution {
public:
    bool isStraight(vector<int>& nums) {
        set<int> s;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] == 0)
                continue;
            if(s.count(nums[i]))
                return false;
            s.insert(nums[i]);
        }
        return *(--s.end())-*s.begin() < 5;
    }
};

int main() {
    vector<int> x{0,0,1,2,5};
    Solution s;
    cout << s.isStraight(x) << endl;
    return 0;
}
