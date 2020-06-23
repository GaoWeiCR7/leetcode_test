#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2)
            return 0;
        vector<int> vec(prices);
        int min = vec[0];
        for(int i = 1; i < prices.size(); ++i)
        {
            vec[i] = (prices[i]-min>0)?(prices[i]-min):0;
            if(prices[i]<min)
                min = prices[i];
        }
        return *max_element(vec.begin()+1,vec.end());
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
