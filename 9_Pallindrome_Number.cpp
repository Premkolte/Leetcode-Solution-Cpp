#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int y= x;
        int newt = 0;
        while(x>0){
            int u;
            u=x%10;
            // int new = 0;
            newt = (newt * 10) +u;

            x=x/10;

        }

        if(y == newt){ 
            return 1;
        }

        return 0;
        
    }
};

int main(){
    Solution s;
    cout<<s.isPalindrome(121);
}