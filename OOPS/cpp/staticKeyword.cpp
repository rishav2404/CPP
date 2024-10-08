#include <iostream>
using namespace std;


void staticFunction() {
    static int count = 0;
    count++;
    cout << "Static count: " << count << endl;
}


class StaticExample {
public:
    static int staticVar; // Static member variable

    StaticExample() {
        staticVar++;
    }

    static void staticFunction() { // Static member function
        cout << "Static member function called. StaticVar: " << staticVar << endl;
    }
};

// Initialize static member variable
int StaticExample::staticVar = 0;

int main() {
    cout << "Static variable in function:" << endl;
    for (int i = 0; i < 5; i++) {
        staticFunction();
    }

    cout << "\nStatic member variable and function in class:" << endl;
    StaticExample obj1;
    StaticExample obj2;
    StaticExample obj3;

    cout << "StaticVar after creating 3 objects: " << StaticExample::staticVar << endl;

    StaticExample::staticFunction();

    return 0;
}