#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i = 0; i <nums.size(); ++i)
        {
            int j,k;
            for(j = 0; j < i; ++j)
            {
                if(nums[i] == nums[j])
                    break;
            }
            for(k = i+1; k < nums.size(); ++k)
            {
                if(nums[i] == nums[k])
                    break;
            }
            if(j == i&&k == nums.size())
                return nums[i];
        }
        return 0;
    }
};

int main() {
    Solution a;
    vector<int> vec;
    int x;
    while(cin >> x)
    {
        vec.push_back(x);
        if(cin.peek()=='\n')
            break;
    }
    cout << a.singleNumber(vec) << endl;
    return 0;
}
