#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>> subsets;
      int n = nums.size();    // number of elements in the given array.
      int no_of_subsets = 1<<n;  // number of subsets possible = 2^n

      for(int mask = 0; mask < no_of_subsets ; mask++){    // Traversing from 0 to (2^n)-1 numbers for different subsets combinations.
            vector<int> subset;
            for(int j = 0;j<n;j++){           // Traversing the Bit masked numbers for elemets of array in a subset.
                  if((mask & (1<<j)) != 0 ){        // Check if mask no. kaa j(th) bit set hai ki nhi.
                        subset.push_back(nums[j]);
                  }
            }
            subsets.push_back(subset);
      }

      return subsets;
        
}


int main(){
      vector<int> nums = {1,2,3,4};
      vector<vector<int>> k = subsets(nums);
      for (int i = 0; i < k.size(); i++){
            cout << '[';
            for (int j = 0; j < k[i].size(); j++){
                  cout << k[i][j] << " ";
            }
            cout << ']' << endl;
      }
}