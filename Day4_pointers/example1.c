#include <stdio.h>
int main() {
    int a = 10;
    int *p;
    p = &a;
    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("Value of p = %p\n", p);
    printf("Value at *p = %d\n", *p);
}
//OUTPUT
Value of a = 10
Address of a = 0x7ffda29bb004
Value of p = 0x7ffda29bb004
Value at *p = 10
