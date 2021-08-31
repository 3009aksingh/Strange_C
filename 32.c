#include <stdio.h>
int main()
{
    int a[10] = {300, 301, 302, 303, 304, 305, 306, 307, 308, 309};
    int *b = a;
    char *c = (char *)(a + 1);
    float *d = (float *)a;
    void *e = a;
    int x = 300;
    char *ptr = (char *)&x;
    *++ptr = 2;
    printf("Output : \n x : %d\n", x);
    printf("&b : %u\n", &b);
    printf("b : %u\n", b);
    printf("b+1 : %u\n", b + 1);
    printf("a : %u\n", a);
    printf("&a : %u\n", &a);
    printf("sizeof(a[0]) : %u\n", sizeof(a[0]));
    printf("&a[1] : %u\n", &a[1]);
    printf("sizeof(c) : %u\n", sizeof(c));
    printf("sizeof(*c) : %u\n", sizeof(*c));
    printf("c : %u\n", c); //* c and &a[1] prints the same address.
    printf("c+1 : %u\n", c + 1);
    printf("d : %u\n", d); //* d, a, &a, &a[0] prints the same address.
    printf("d+1 : %u\n", d + 1);
    printf("*b : %u\n", *b);
    printf("*c : %u\n", *c);
    printf("*d : %u\n", *d);
    printf("&e : %u\n", &e);
    printf("e : %u\n", e);
    printf("sizeof(e) : %u\n", sizeof(e));
    // printf("e[0] : %u\n", e[0]); //!error
    // printf("*e : %u\n", *e); //!error
    // printf("sizeof(*e) : %u\n", sizeof(*e)); //!erorr
    // printf("e+1 : %u\n", e + 1); //!ERROR as void (*e) don't contain a datatype and hence none of the memory is allocated for void, so e + 1 is not possible to find.

    printf("sizeof(*d) : %u\n", sizeof(*d));
    printf("sizeof(a) : %u\n", sizeof(a));
    return 0;
}
