#include <bits/stdc++.h>
using namespace std;

string toUpperCase(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }
    return s;
}

string toLowerCase(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
    return s;
}

char maxFreq(string s)
{
    vector<int> freq(26,0);
    for(int i = 0 ; i < s.size(); i++){ 
        freq[s[i] - 'a']++;
    }

    int maxi = 0;
    char c = 'a';
    for(int i = 0 ; i < 26; i++){
        if(freq[i] > maxi){
            maxi = freq[i];
            c = i + 'a';
        }
    }
    cout<< *max_element(freq.begin(),freq.end())<< endl;
    return c;
}

vector<string> stringPermutations(string s){

    vector<string> v;
    sort(s.begin(), s.end());
    do{
        v.push_back(s);
    } while(next_permutation(s.begin(), s.end()));
    return v;
}

// void backTracePermutation() {
// }

int main()
{
    string str;
    cin >> str;
    // cout << toUpperCase(str) << endl;
    // cout << toLowerCase(str) << endl;
    cout << maxFreq(str) << endl;
    vector<string> k = stringPermutations(str);
    for(string s:k){
        cout<< s<< endl;
    }
}
