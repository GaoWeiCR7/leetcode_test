#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseLeftWords(string s, int n) {
        string temp1 = s.substr(0,n);
        string temp2 = s.substr(n);
        return temp2+temp1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
