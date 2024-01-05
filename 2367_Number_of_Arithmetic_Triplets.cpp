#include<iostream>
using namespace std;

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int flag = 0;
        for(int i=0 ;i<nums.size(); i++){
            for(int j = 1;j<nums.size();j++){
                for(int k =2; k<nums.size();k++){
                    // if(diff==nums[i]-nums[j]) {flag++; }
                    // else{
                    //     if(diff==nums[i]-nums[j]) {flag++; }}
                    
                    // if(diff==nums[j]-nums[k]) {flag++; }
                    // else{
                    //     if(diff==nums[k]-nums[j]) {flag++; }}

                    // if(diff==nums[i]-nums[k]) {flag++; }
                    // else{
                    //     if(diff==nums[k]-nums[i]) {flag++; }}

                    // if(diff==nums[i]-nums[j]) {flag++; }
                    // if(diff==nums[j]-nums[i]) {flag++; }
                    // if(diff==nums[j]-nums[k]) {flag++; }
                    // if(diff==nums[k]-nums[j]) {flag++; }
                    // if(diff==nums[i]-nums[k]) {flag++; }
                    // if(diff==nums[k]-nums[i]) {flag++; }

                    if(i<j<k){
                        if(diff==nums[j]-nums[i] && diff==nums[k]-nums[j]) {flag++; }
                    }
                }
            }
        }
        return(flag);
    }
};

int main(){
    Solution s;
    vector<int> v = {7,11,15,9,5};
    cout<<"Number of Arithmetic Triplet is "<<s.arithmeticTriplets(v,5);
}