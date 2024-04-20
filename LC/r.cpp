#include <bits/stdc++.h>
using namespace std;

// ios_base::sync_with_stdio(0);
//         cin.tie(0);
//         cout.tie(0);

int main()
{   
    int num = 38;
    int a=15;
    int sum =(num&a);
    
    // while(num!=0){
    //     sum += ((num>>4) & 15);
    // }
    cout<<fixed<< setprecision(5) << 1e2;
}

// class Solution {
// public:
//     int numSubarraysWithSum(vector<int>& nums, int goal) {
//         long subarray = 0, count = 0;
//         int i = 0, j = 0;
//         while (i < nums.size()) {
//             count += nums[j];
//             j++;
//             if (count == goal) {
//                 subarray++;
//             }
//             if ((count > goal) || (j == (nums.size() - 1))) {
//                 count = 0;
//                 i++;
//                 j = i;
//                 // continue;
//             }
//         }
//         return subarray;
//     }
// };