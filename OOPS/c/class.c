#include <stdio.h>

struct ABC {
    int a;
    char b;
    float c;
};


int main () {
    struct ABC* abc;
    struct ABC* def;
    struct ABC* ghi;

    struct ABC obj;
    // obj.a = 10;
    // obj.b = 'X';
    // obj.c = 12.34;

    printf("Mem. Loc. of abc: %X\n", abc);
    printf("Mem. Loc. of def: %X\n", def);
    printf("Mem. Loc. of ghi: %X\n", ghi);

    printf("Size: %zu bytes\n", sizeof(struct ABC));
    printf("Size: %zu bytes\n", sizeof(abc));
    printf("Size: %zu bytes\n", sizeof(obj));

    return 0;
}