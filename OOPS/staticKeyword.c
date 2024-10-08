#include <stdio.h>

struct ABC {
    int a;
    char b;
    float c;
};

int increment(int b) {
    static int a;
    a = a + b;
    return a;
}

int main () {
    struct ABC obj;
    obj.a = 10;
    obj.b = 'a';
    obj.c = 10.5;

    // printf("%d %c %f", obj.a, obj.b, obj.c);

    for( int i = 0; i < 5; i++) {
        printf("%d\n", increment(5));
    }

    return 0;
}