#include <stdio.h>
int a = 5;
static int c = 12;
static long int i = 120;
extern int j = 45; //!here declaration is allowed for extern variable. Warning comes but no error.
int b;
//register int b; //*error
//auto int b; //*error
int main()
{
    extern int a; //!declaration not allowed for extern variables. Error comes in case if we do it.
    extern int c;
    extern int b;
    long int d, e, f;
    long long int g, h;
    printf("a : %d\n", a);
    printf("b : %d\n", b);
    printf("c : %d\n", c);
    printf("d : %ld , e : %ld , f : %ld\n", d, e, f);
    printf("g : %lld, h : %lld  \n", g, h);
    printf("i : %ld\n", i);
    printf("j : %d\n", j);
    return (0);
}