#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    char firstUniqChar(string s) {
        if(s.length() == 0)
            return ' ';
        unordered_map<char,int> hash;
        for(int i = 0; i < s.length();++i)
            hash[s[i]]++;
        for(int i = 0; i < s.length(); ++i)
        {
            if(hash[s[i]] == 1)
                return s[i];
        }
        return ' ';
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
