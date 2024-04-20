#include <bits/stdcc.h>
using namespace std;


const int N = 1e5 + 10;
vector <int> divisors[N]; // divisors[i] contains all the divisors of i
int sum[N]; // sum[i] contains the sum of all divisors of i

int main(){
    for(int i = 2; i < N; ++i){
        for(int j = i; j < N; j += i){
            divisors[j].push_back(i);
            sum[j] += i;
        }
    }
    /* nlogn*/

    for(int i = 1; i < 20; ++i){
        cout << i << " : ";
        for(auto x : divisors[i]){
            cout << x << " ";
        }
        cout << endl;
    }
}