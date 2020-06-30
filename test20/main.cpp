#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool verifyPostorder(vector<int>& postorder) {
        return recur(postorder,0,postorder.size()-1);
    }
    bool recur(vector<int>& postorder,int begin,int end)
    {
        if(begin >= end)
            return true;
        /*int split = end;
        for(int i = begin; i < end;++i)
        {
            if(postorder[i] > postorder[end])
            {
                split = i;
                break;
            }
        }
        for(int i = split; i < end; ++i)
        {
            if(postorder[i] < postorder[end])
                return false;
        }*/
        int split = begin;
        while(postorder[split] < postorder[end])
            split++;
        int temp = split;
        while(postorder[temp] > postorder[end])
            temp++;
        if(temp != end)
            return false;
        return recur(postorder,begin,split-1)&&recur(postorder,split,end-1);
    }
};

int main() {
    Solution s;
    vector<int> a{1,2,3,4,5};
    cout << s.verifyPostorder(a) << endl;
    return 0;
}
