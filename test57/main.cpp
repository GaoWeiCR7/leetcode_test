#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int begin = 0; int end = nums.size()-1;
        while(begin <= end)
        {
            int m = (begin+end)/2;
            if(nums[m] <= target)
                begin = m+1;
            else
                end = m-1;
        }
        int right = begin;
        if(end < 0||nums[end] != target)
            return 0;
        begin = 0;
        end = nums.size()-1;
        while (begin<=end)
        {
            int m = (begin+end)/2;
            if(nums[m]<target)
                begin = m+1;
            else
                end = m-1;
        }
        int left = end;
        return right-left-1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
