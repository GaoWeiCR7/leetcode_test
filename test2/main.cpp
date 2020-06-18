#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> singleNumbers(vector<int>& nums)
    {
        int res = 0;
        for(int i = 0; i < nums.size();++i)
            res^=nums[i];
        int k = 1;
        while(k<=res)
        {
            if((res&k) == k)
                break;
            k <<= 1;
        }
        int as1 = 0;
        int as2 = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            if((nums[i]&k)!=0)
                as1 ^= nums[i];
            else
                as2 ^= nums[i];
        }
        return vector<int>{as1, as2};
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
    vector<int> res(a.singleNumbers(vec));
    for(int i = 0; i < res.size(); ++i)
        cout << res[i] << endl;
    return 0;

}
