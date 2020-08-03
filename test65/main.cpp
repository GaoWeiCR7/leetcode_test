#include <iostream>
#include <vector>
using namespace std;

/*class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0||matrix[0].size() == 0)
            return false;
        return findt(matrix,0,matrix[0].size()-1,0,matrix.size()-1,target);
    }
    bool findt(vector<vector<int>> matrix, int left, int right, int top, int bottom, int target)
    {
        if(left > right||top > bottom)
            return false;
        int mx = (left+right)/2;
        int my = (top+bottom)/2;
        if(matrix[my][mx] > target)
            return findt(matrix,left,right,top,my-1,target)||findt(matrix,left,mx-1,my,bottom,target);
        else if(matrix[my][mx] < target)
            return findt(matrix,mx+1,right,top,my,target)||findt(matrix,left,right,my+1,bottom,target);
        else
            return true;
    }
};*/

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0|| matrix[0].size() == 0)
            return false;
        int x = matrix[0].size()-1;
        int y = 0;
        while(y < matrix.size()&&x >= 0)
        {
            if(matrix[y][x] < target)
                ++y;
            else if(matrix[y][x] > target)
                --x;
            else
                return true;
        }
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
