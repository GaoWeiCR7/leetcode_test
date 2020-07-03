#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string replaceSpace(string s) {
        for(int i = 0; i < s.length(); ++i)
        {
            if(s[i] == ' ')
                s.replace(i,1,"%20");
        }
        return s;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
