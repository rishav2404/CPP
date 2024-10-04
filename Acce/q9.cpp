#include <bits/stdc++.h>
using namespace std;

string MoveHyphen(string str,int n) {
    int count = 0;
    for(int i = 0 ; i < n ; i++) {
        if(str[i] == '-') {
            str.erase(i,1);
            count++;
        }
    }
    while(count--) str = '-' + str;
    return str;
}


int main() {
    string s;
    getline (cin, s);
    int len = s.size();
    char *p = &s[0];
    cout << MoveHyphen(s, len) << endl;
}