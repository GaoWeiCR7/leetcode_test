#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<string> permutation(string s) {
        vector<vector<string>> dp;
        vector<string> dp0;
        dp0.push_back(s.substr(0,1));
        dp.push_back(dp0);
        for(int i = 1; i < s.size(); ++i)
        {
            vector<string> temp;
            for(string str:dp[i-1])
            {
                for(int j = 0; j <= str.size(); ++j)
                {
                    temp.push_back(str.substr(0,j)+s[i]+str.substr(j));
                }
            }
            set<string> setstr(temp.begin(),temp.end());
            temp.assign(setstr.begin(),setstr.end());
            dp.push_back(temp);
        }
        return dp[s.size()-1];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
