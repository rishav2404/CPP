#include <iostream>
using namespace std;

struct ABC {
    int a;
    char b;
    float c;
};

int main() {

    cout << "Size of Class: " << sizeof(ABC) << " bytes" << endl;
    cout << endl;

    ABC* abc; // pointer to object
    
    ABC obj;  // object
    ABC def;  // object

    cout << "Mem. Loc. of abc: " << &abc << endl;
    cout << "Mem. Loc. of def: " << &def << endl;
    cout << endl;

    cout << "Size: " << sizeof(abc) << " bytes" << endl;
    cout << "Size: " << sizeof(*abc) << " bytes" << endl;
    cout << "Size: " << sizeof(obj) << " bytes" << endl;

    return 0;
}