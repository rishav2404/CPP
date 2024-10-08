#include <stdio.h>
#include <string.h>

struct ABC {
    int a;
    char b;
    float c;
    void (*funcPtr)(int);
    void (*functStringPointer)(char*);
    char* (*functStringPointer1)(char*);
};

// Define a function that matches the function pointer signature
void printValue(int value) {
    printf("Value: %d\n", value);
}

void printName(char* name) {
    printf("Name: %s\n", name);
}

char* printName1(char* name) {
    return name;
}

int main() {
    struct ABC obj;
    obj.a = 10;
    obj.b = 'X';
    obj.c = 12.34;
    obj.funcPtr = printValue; // Assign the function to the function pointer

    // Call the function through the function pointer
    obj.funcPtr(obj.a);

    obj.functStringPointer = printName;
    obj.functStringPointer("Aarsh");

    obj.functStringPointer1 = printName1;
    char* p = (*printName1)("Kush Patel");
    printf("Name: %s\n", p);

    return 0;
}