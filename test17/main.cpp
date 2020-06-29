#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int translateNum(int num) {
        string s = to_string(num);
        int size = s.size();
        int* dp = new int[size];
        dp[0] = 1;
        for(int i = 1; i < size; ++i)
        {
            string temp = s.substr(0,i+1);
            if(i == 1)
            {
                if(temp>"25"||temp<"10")
                    dp[1] = dp[0];
                else
                    dp[1] = dp[0]+1;
            }
            else
            {
                string finaltwo = temp.substr(temp.size()-2,2);
                if(finaltwo > "25"||finaltwo<"10")
                    dp[i] = dp[i-1];
                else
                    dp[i] = dp[i-2]+dp[i-1];
            }
        }
        return dp[size-1];
    }
};

int main() {
    Solution s;
    int t = s.translateNum(1546216);
    cout << t << endl;
    return 0;
}
