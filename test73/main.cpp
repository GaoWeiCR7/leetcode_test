#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> swapNumbers(vector<int>& numbers) {
        numbers[0] ^= numbers[1];
        numbers[1] ^= numbers[0];
        numbers[0] ^= numbers[1];
        return numbers;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
