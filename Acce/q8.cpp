#include <bits/stdc++.h>
using namespace std;

string DectoNBase(int n, int num) {
    string s= "";
    vector<int> rem;
    while(num != 0) {
        rem.push_back(num % n);
        num = num / n;
    }

    reverse(rem.begin(), rem.end());
    
    for(int x : rem) {
        if (x > 9) s += char(x - 10 + 'A');
        else s += to_string(x);
    }
    return s;
}

int main () {
    int N;
    cin >> N;
    int num;
    cin >> num;

    // char *k = DectoNBase(N, num);
    cout << DectoNBase(N, num) << endl;
}