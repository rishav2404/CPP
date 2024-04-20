#include <bits/stdc++.h>
using namespace std;


int countKeyChanges(string s) {
        int count =0;
        for(int i=0;i<(s.length()-1);i++){
            if(((s[i] == char(s[i+1]+32)) || (s[i] == char(s[i+1]-32)) || (s[i] == s[i+1]))){
                continue;
            }
            else{
                count++;}
        }
        return count;
    }

int main()
{
    string s ="abB";
    int k = countKeyChanges(s);
    cout<< k<<endl;
}