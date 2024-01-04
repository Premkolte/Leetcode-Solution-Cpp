#include<iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long rev = 0;
    while(x)
        {
            int p = x%10;
            rev= rev *10 + p;
            x = x/10;
        }
        if(rev > INT_MAX || rev < INT_MIN){return 0;}
        return rev;
    }
};
int main (){
    Solution S;
    int q = 12345;
    cout<<S.reverse(q);
    }
    

