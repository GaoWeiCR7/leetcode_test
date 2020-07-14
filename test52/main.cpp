#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/*class Solution {
public:
    int partition(vector<int>& arr, int begin, int end)
    {
        int i = begin;
        int j = end;
        int x = arr[begin];
        while(i < j)
        {
            while(arr[j] > x)
                --j;
            while(i < j&&arr[i] <= x)
                ++i;
            if(i < j)
                swap(arr[i],arr[j]);
        }
        swap(arr[begin],arr[i]);
        return i;
    }
    void quicksort(vector<int>& arr, int begin, int end, int k)
    {
        if(begin < end)
        {
            int m = partition(arr,begin,end);
            if(k <= m+1)
                quicksort(arr,begin,m-1,k);
            else
                quicksort(arr,m+1,end,k);
        }
    }
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        quicksort(arr,0,arr.size()-1,k);
        return vector<int>(arr.begin(),arr.begin()+k);
    }
};*/

class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        vector<int> vec(k,0);
        if(k == 0)
            return vec;
        priority_queue<int> q;
        for(int i = 0; i < k; ++i)
            q.push(arr[i]);
        for(int i = k; i < arr.size(); ++i)
        {
            if(q.top() > arr[i])
            {
                q.pop();
                q.push(arr[i]);
            }
        }
        for(int i = 0; i < k; ++i)
        {
            vec[i] = q.top();
            q.pop();
        }
        return vec;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
