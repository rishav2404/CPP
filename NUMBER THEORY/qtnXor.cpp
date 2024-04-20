/**
 * Given array a of n integers. All integers
 * are present in even count except one.
 * Find that one integer which has odd count
 * in O(N) time complexity and 0(1) space;
 * N <10^5
 * a[i] < 10^5
 */

/* If we take XOR of all the array elements,
 then the even occurance of the numbers grt cancle out
and the odd one will remain out and that will be the answer.

e.g. a^b^a^c^b^b^b = c
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    int ans = 0;

    for (int i =0;i<n;++i){
        cin >>x;
        ans ^= x;
    }
    
    cout << ans<< endl;
}