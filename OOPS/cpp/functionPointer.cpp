#include <iostream>
using namespace std;

struct ABC {
    int a;
    char b;
    float c;

    void (*funcPtr)(int); // Function pointer that takes an int and returns void
    void (*funcPtr2)(int, int);
    int (*productPtr)(int ,int) = productPtr;

};

// Define a function that matches the function pointer signature
void printValue(int value) {
    cout << "Value: " << value << endl;
}

void printSum(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

void print5(int a) {
    cout << "Hello: " << a << " : " <<5 << endl;
}

int product(int a, int c) {
    return a*c;
}

int main() {
    ABC obj;
    obj.a = 10;
    obj.b = 'X';
    obj.c = 12.34;

    obj.funcPtr = printValue; // Assign the function to the function pointer
    obj.funcPtr(obj.a);  // Call the function through the function pointer

    obj.funcPtr = print5;
    obj.funcPtr(obj.a);  // Call the function through the function pointer
    
    obj.funcPtr2 = printSum;
    obj.funcPtr2(obj.c, obj.a);

    int cl = (*product) (4,12);
    cout << "Product: " << cl << endl ;

    return 0;
}