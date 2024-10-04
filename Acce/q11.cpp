#include <bits/stdc++.h>
using namespace std;

void replaceCharacter(char str[], int n, char ch1, char ch2) {
    for(int i =0; i < n; i++ ) {
        if(str[i] == ch1) str[i] = ch2;
        else if(str[i] == ch2) str[i] = ch1;
    }
    cout << str << endl;
}

int main() {
    // string str;
    // getline(cin, str);
    char str[100];
    cin >> str;
    
    char ch1, ch2;
    cin >> ch1;
    cin >> ch2;

    int len = strlen(str);
    replaceCharacter(str, len, ch1, ch2);
}