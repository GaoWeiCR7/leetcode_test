#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int pos1,pos2 = 0;
        string ret;
        while(pos2!=s.npos)
        {
            pos1 = s.find_first_not_of(' ',pos2);
            if(pos1 == s.npos)
                break;
            pos2 = s.find_first_of(' ',pos1);
            ret = s.substr(pos1,pos2-pos1)+' '+ret;
        }
        if(ret.size() != 0)
            ret.pop_back();
        return ret;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
