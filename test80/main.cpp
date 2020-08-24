#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    /*bool CheckPermutation(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1 == s2)
            return true;
        return false;
    }*/
    bool CheckPermutation(string s1, string s2) {
        set<char> set1(s1.begin(),s1.end());
        set<char> set2(s2.begin(),s2.end());
        return set1 == set2;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
