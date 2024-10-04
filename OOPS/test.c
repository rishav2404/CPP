

ABC {
    int a;
    char b;
    float c;
}

int main () {
    ABC obj;
    obj.a = 10;
    obj.b = 'a';
    obj.c = 10.5;
    return 0;

    //print obj.a, obj.b, obj.c
    printf("%d %c %f", obj.a, obj.b, obj.c);
}