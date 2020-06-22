#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> value(grid);
        for(int i = 0; i < m; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                if(i == 0&& j == 0)
                    value[i][j] = grid[0][0];
                else if(i == 0)
                    value[i][j] = value[i][j-1]+grid[i][j];
                else if(j == 0)
                    value[i][j] = value[i-1][j]+grid[i][j];
                else
                    value[i][j] = max(value[i][j-1],value[i-1][j])+grid[i][j];
            }
        }
        return value[m-1][n-1];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
