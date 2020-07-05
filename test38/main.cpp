#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> ret;
        int begin = 1, end = 2;
        while(begin <= target/2)
        {
            int sum = (begin+end)*(end-begin+1)/2;
            if(sum < target)
                end++;
            else if(sum > target)
                begin++;
            else
            {
                vector<int> temp;
                for(int i = begin; i <= end; ++i)
                    temp.push_back(i);
                ret.push_back(temp);
                begin++;
            }
        }
        return ret;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
