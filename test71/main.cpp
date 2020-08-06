#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isUnique(string astr) {
        unordered_set<int> s;
        for(int i = 0; i < astr.length(); ++i)
        {
            if(!s.insert(astr[i]).second)
                return false;
        }
        return true;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
