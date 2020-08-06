#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
    vector<string> res;
public:
    vector<string> generateParenthesis(int n) {
        dfs(0,0,n,"");
        return res;
    }
    void dfs(int a,int b,int n, string s)
    {
        if(a == n&&b == n)
        {
            res.push_back(s);
            return;
        }
        if(a < n)
            dfs(a+1,b,n,s+'(');
        if(b<a&&b<n)
            dfs(a,b+1,n,s+')');
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
