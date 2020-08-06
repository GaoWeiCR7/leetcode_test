#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> permutation(string S) {
        vector<string> a;
        vector<string> b;
        if(S.length() == 0)
            return a;
        a.push_back(S.substr(0,1));
        for(int i = 1; i < S.length(); ++i)
        {
            vector<string> temp;
            b.swap(temp);
            for(int j = 0; j < a.size(); ++j)
            {
                b.push_back(S[i]+a[j]);
                for(int k = 1; k < a[j].length(); ++k)
                {
                    b.push_back(a[j].substr(0,k)+S[i]+a[j].substr(k));
                }
                b.push_back(a[j]+S[i]);
            }
            a = b;
        }
        return b;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
