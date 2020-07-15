#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minArray(vector<int>& numbers) {
        for(int i = 0; i < (int)numbers.size()-1; ++i)
        {
            if(numbers[i] > numbers[i+1])
                return numbers[i+1];
        }
        return numbers[0];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
