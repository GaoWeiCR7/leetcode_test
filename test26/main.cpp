#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i < board.size(); ++i)
            for(int j = 0; j < board[i].size(); ++j)
            {
                string s;
                if(judge(board,i,j,s,word) == true)
                    return true;
            }
        return false;
    }
    bool judge(vector<vector<char>>& board,int i, int j, string s, string word)
    {
        if(i<0||j<0||i>=board.size()||j>=board[i].size())
            return false;
        int index = s.length();
        if(board[i][j] == word[index])
        {
            s.push_back(board[i][j]);
            if(s.length() == word.length())
                return true;
            board[i][j] = '@';
            bool ret = judge(board,i+1,j,s,word)||
                    judge(board,i,j+1,s,word)||
                    judge(board,i-1,j,s,word)||
                    judge(board,i,j-1,s,word);
            board[i][j] = s.back();
            return ret;
        }
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
