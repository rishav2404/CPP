#include <iostream>
#include <vector>
using namespace std;
 

    
class Solution {
public:

    string triangleType(vector<int>& nums) {
        string triangle;
        ios_base::sync_with_stdio(false);
        if(((nums[0]+nums[1]) > nums[2])&&((nums[0]+nums[2]) > nums[1])&&((nums[1]+nums[2])>nums[0]) == 0){
            triangle = "none";
        }
        else{
            if((nums[0]==nums[1])&&(nums[1]==nums[2])){
                triangle = "equilateral";
            }else if((nums[0]!=nums[1])&&(nums[0]!=nums[2])&&(nums[1]!=nums[2])){
                 triangle = "scalene";
            }else{
                triangle = "isosceles";
            }
        }

        return triangle;
    }
};