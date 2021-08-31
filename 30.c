#include <stdio.h>
struct test
{
    int i;
    char *c;
} st[] = {5, "become", 4, "better", 6, "jungle", 8, "ancestor", 7, "brother"};
//!size of struct varies from compiler to compiler that's the reason here in spite of summation of size of data types coming as : (4+8 = 12), we are getting summation as 16 instead of 12. So, don't bother much about this as padding is done according to the compiler convenience.
int main()
{
    struct test *p = st;
    printf("sizeof((*p).i) : %d\n", sizeof((*p).i));
    printf("sizeof((*p).c) : %d\n", sizeof((*p).c));
    printf("sizeof((p[1]).c) : %d\n", sizeof((p[0]).c));
    // printf("sizeof((p[1]).c) : %d\n", sizeof((p[1]).c));
    // printf("sizeof((p[2]).c) : %d\n", sizeof((p[2]).c));
    // printf("sizeof((p[3]).c) : %d\n", sizeof((p[3]).c));
    // printf("sizeof((p[4]).c) : %d\n", sizeof((p[4]).c));
    printf("sizeof((p[1]).i) : %d\n", sizeof((p[0]).i));
    // printf("sizeof((p[1]).i) : %d\n", sizeof((p[1]).i));
    // printf("sizeof((p[2]).i) : %d\n", sizeof((p[2]).i));
    // printf("sizeof((p[3]).i) : %d\n", sizeof((p[3]).i));
    // printf("sizeof((p[4]).i) : %d\n", sizeof((p[4]).i));
    printf("sizeof(*p) : %d\n", sizeof(*p));
    printf("sizeof(p) : %d\n", sizeof(p));
    printf("sizeof(st) : %d\n", sizeof(st));
    printf("sizeof(st[0]) : %d\n", sizeof(st[0]));
    // printf("sizeof(st[1]) : %d\n", sizeof(st[1]));
    // printf("sizeof(st[2]) : %d\n", sizeof(st[2]));
    // printf("sizeof(st[3]) : %d\n", sizeof(st[3]));
    // printf("sizeof(st[4]) : %d\n", sizeof(st[4]));
    printf("location address of (st+0) : %u\n", (st + 0));
    printf("location address of (st+5) : %u\n", (st + 5));
    printf("st : %u\n", st);
    printf("*p : %d\n", *p);
    printf("p : %u\n", p);
    p += 1;
    printf("*p : %d\n", *p);
    printf("p : %u\n", p);
    ++p->c;
    printf("*p : %d\n", *p);
    printf("p : %u\n", p);
    printf("%s\n", p++->c);
    printf("*p : %d\n", *p);
    printf("p : %u\n", p);
    printf("%c\n", *++p->c);
    printf("*p : %d\n", *p);
    printf("p : %u\n", p);
    printf("%d\n", p[0].i);
    printf("*p : %d\n", *p);
    printf("p : %u\n", p);
    printf("%s\n", p->c);
    printf("*p : %d\n", *p);
    printf("p : %u\n", p);
    return 0;
}