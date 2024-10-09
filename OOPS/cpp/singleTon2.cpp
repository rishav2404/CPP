#include <bits/stdc++.h>
using namespace std;

class ABC {
    static ABC* abc;

    // private constructor
    ABC(){}
    
    KushPatel(const KushPatel&) = delete;
    KushPatel& operator=(const KushPatel&) = delete;
    
    public:
    static ABC* get_inst() {
        if( abc == NULL ) {
            abc=new ABC;
        }
        return abc;
    }
};

ABC* ABC::abc = NULL;


int main()
{

    // cout << ABC::get_inst() << endl;

    ABC* obj = ABC::get_inst();
    cout << obj << endl;

    ABC* obj2 = ABC::get_inst();
    cout << obj2 << endl;

    return 0;
}