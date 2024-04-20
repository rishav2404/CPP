#include <bits/stdc++.h>

using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "abc";   // O(log(n))
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4,"xyz"});

    // map<int, string> ::iterator it;
    // for (it = m.begin(); it != m.end(); ++it)
    // {
    //     cout << (*it).first<<" "<<(*it).second<<endl;
    // }

    for(auto &pr:m){   //for pair in map  &&  & -> so that we do not have a copy of map every where
        cout << pr.first<<" "<<pr.second<<endl;
    }
}