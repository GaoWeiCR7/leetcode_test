#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<double> twoSum(int n) {
        if(n == 1)
            return vector<double>{(double)1/6,(double)1/6,(double)1/6,(double)1/6,(double)1/6,(double)1/6};
        vector<double> temp = twoSum(n-1);
        vector<double> ret(temp.size()+5,0);
        ret[0] = temp[0]/6;
        ret[1] = (temp[0]+temp[1])/6;
        ret[2] = (temp[0]+temp[1]+temp[2])/6;
        ret[3] = (temp[0]+temp[1]+temp[2]+temp[3])/6;
        ret[4] = (temp[0]+temp[1]+temp[2]+temp[3]+temp[4])/6;
        int size = temp.size();
        for(int i = 0; i < size-5; ++i)
            ret[i+5] = (temp[i]+temp[i+1]+temp[i+2]+temp[i+3]+temp[i+4]+temp[i+5])/6;
        ret[size] = (temp[size-1]+temp[size-2]+temp[size-3]+temp[size-4]+temp[size-5])/6;
        ret[size+1] = (temp[size-1]+temp[size-2]+temp[size-3]+temp[size-4])/6;
        ret[size+2] = (temp[size-1]+temp[size-2]+temp[size-3])/6;
        ret[size+3] = (temp[size-1]+temp[size-2])/6;
        ret[size+4] = (temp[size-1])/6;
        return ret;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
