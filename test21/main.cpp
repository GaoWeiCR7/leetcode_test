#include <iostream>
#include <vector>
using namespace std;

class Solution {
    int m,n,k;
    vector<vector<bool>> visited;
public:
    int movingCount(int m, int n, int k) {
        this->m = m;
        this->n = n;
        this->k = k;
        visited.resize(m,vector<bool>(n, false));
        return dfs(0,0,0,0);
    }
    int dfs(int i,int j, int si, int sj)
    {
        if(i >= m||j >= n||si+sj>k||visited[i][j] == true)
            return 0;
        visited[i][j] = true;
        int i1 = i+1;
        int si1 = getsum(i1);
        int j2 = j+1;
        int sj2 = getsum(j2);
        return 1+dfs(i1,j,si1,sj)+dfs(i,j2,si,sj2);
    }
    int getsum(int x)
    {
        int res = 0;
        while(x > 0)
        {
            res += x%10;
            x = x/10;
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
