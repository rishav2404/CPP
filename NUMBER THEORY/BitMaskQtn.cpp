#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;   // n--> no. of workers

    vector<int> masks(n,0);  /*created bit mask array to store bit masked values of days of each worker. */

    for(int i = 0;i<n;i++){
        int num_workers;
        cin>> num_workers;  // num_workers --> no. of days worker is working.
        int mask = 0;
        for(int j= 0;j<num_workers;j++){
            int day;
            cin>>day;
            mask = (mask | (1<<day));   /* masking the bits corresponding to the dates workier is working(1->30) */
        }
        masks[i] = mask;   // storing the masked value of each worker.
    }

    int max_days = 0;
    int person1 = -1;
    int person2 = -1;

    for(int  i =0;i<n;i++){
        for(int j=i+1;j<n;j++){ /* taking intersection of each worker working days with anoter's to find maxm common days */
            int intersection = (masks[i] & masks[j] );    
            int common_days = __builtin_popcount(intersection);  /* O(1) */
            if(common_days>max_days){
                max_days = common_days;
                person1 = i;  /* person1 and person2 --> having max same dates of work*/
                person2 = j;
            }
        }
    }

    cout<< person1 <<" "<< person2<< " " <<max_days<<endl;


    /* O(n^2)*/
}