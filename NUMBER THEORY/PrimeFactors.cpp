#include <stdio.h>
#include <bits/stdio.h>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> prime_factors;

    // O(N)
    for (int i =2; i<=n; i++){
         while (n % i == 0) {
            prime_factors.push_back(i);
            n /= i;
        }
    }
    
    // O(sqrt(N))
    for (int i =2; i<=n; i++){
         while (n % i == 0) {
            prime_factors.push_back(i);
            n /= i;
        }
    }
    if(n>1) prime_factors.push_back(n);
    
    for (int prime : prime_factors){
        cout << prime <<" ";
    }
}