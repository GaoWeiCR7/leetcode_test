#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

class Solution {
public:
    int countDigitOne(int n) {
        int num = 0;
        string nstr = to_string(n);
        for(int i = 0; i < nstr.length(); ++i)
        {
            string highstr = nstr.substr(0,i);
            string lowstr = nstr.substr(i+1);
            int highnum = (highstr.length() == 0)?0:stoi(highstr);
            int lownum = (lowstr.length()==0)?0:stoi(lowstr);
            if(nstr[i]-'0'>1)
                num += (highnum+1)*pow(10,nstr.length()-i-1);
            else if(nstr[i]-'0' == 1)
                num += highnum*pow(10,nstr.length()-i-1)+lownum+1;
            else
                num += highnum*pow(10,nstr.length()-i-1);
        }
        return num;
    }

};

int main() {

}
