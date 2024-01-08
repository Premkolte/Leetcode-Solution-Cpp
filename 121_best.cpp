#include<iostream>
using namespace std;

class Solution {
public:
// [7,1,5,3,6,4]
    int maxProfit(vector<int>& price) {
        int b=price[0] , s=0;
        for(int i = 1 ; i< price.size() ; i++){
            if(price[i]<price[i+1] && b<price[i-1]){
                b = price[i];
            }
            else if(b>s && s<price[i]){
                s = price[i];
            }
        }

        if(b>s) {return b-s;}
        else {return 0;}

    }
};

int main(){
    Solution sol;
    vector<int> v ;
    for (int j = 1; j <= v.size(); j++){
        v.push_back(j);}
    cout<<sol.maxProfit(v);
    
}