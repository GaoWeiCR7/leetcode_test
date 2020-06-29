#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    static bool cmp(int x1, int x2)
    {
        string s1 = to_string(x1);
        string s2 = to_string(x2);
        return s1+s2 < s2+s1;
    }
    string minNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),cmp);
        string res;
        for(int i = 0; i < nums.size();++i)
        {
            res += to_string(nums[i]);
        }
        return res;
    }
};

int main() {
    string s1 = "21";
    string s2 = "2";
    cout << (s1<s2) << endl;
    return 0;
}
