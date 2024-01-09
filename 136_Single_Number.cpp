#include<iostream>
using namespace std;
class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
          int xor1=0;
   for(int i=0;i<nums.size();i++){
      xor1=xor1^nums[i];
   }
   return xor1;

    }
};