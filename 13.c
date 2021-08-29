#include <stdio.h>
int a = 5;
//register int b; //*error
//auto int b; //*error
int main()
{
    extern int a; //? 'n' number of times declaration is valid using extern only.
    extern int a;
    extern int a;
    printf("a : %d\n", a);
    return (0);
}