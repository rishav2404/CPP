#include <iostream>
using namespace std;

struct ABC {
    int a;
    char b;
    float c;
};

int main() {

    ABC* abc; // pointer to object

    ABC obj;  // object

    cout << "Mem. Loc. of abc: " << abc << endl;
    cout << "Mem. Loc. of def: " << def << endl;
    cout << "Mem. Loc. of ghi: " << ghi << endl;

    cout << "Size: " << sizeof(ABC) << " bytes" << endl;
    cout << "Size: " << sizeof(abc) << " bytes" << endl;
    cout << "Size: " << sizeof(obj) << " bytes" << endl;

    return 0;
}