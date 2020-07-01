#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0)
            return 0;
        vector<string> dp;
        vector<int> len;
        dp.push_back(s.substr(0,1));
        len.push_back(1);
        for(int i = 1; i < s.length(); ++i)
        {
            int x = dp[i-1].find(s[i]);
            if(x == -1)
            {
                len.push_back(len[i-1]+1);
                dp.push_back(dp[i-1]+s[i]);
            }
            else
            {
                len.push_back(len[i-1]-x);
                dp.push_back(dp[i-1].substr(x+1)+s[i]);
            }
        }
        return *max_element(len.begin(),len.end());
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
