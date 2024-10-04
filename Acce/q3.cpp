#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int CheckPassword(char str[], int n)
{
    if (n < 4)
        return 0;
    if ((str[0] - '0' >= 0) && (str[0] - '0' <= 9))
        return 0;
    int num = 0, cap = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] - '0' >= 0 && str[i] - '0' <= 9)
            num++;
        if (str[i] >= 65 && str[i] <= 90)
            cap++;
        if (str[i] == '/' || str[i] == ' ')
            return 0;
    }

    return (num && cap);
}

int main ()
{
  string s;
  getline (cin, s);
  int len = s.size ();
  char *c = &s[0];
  cout << CheckPassword (c, len);
}