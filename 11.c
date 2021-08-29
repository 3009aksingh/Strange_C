#include <stdio.h>
int a = 5;
int b = 60;
void f()
{
    printf("f() => a : %d   \n", a); //? extern variable directly connects with global varible and modification of variable's data is done globally in the static area.
    printf("f() => b : %d   \n\n", b);
    a++;
    b++;
    printf("f() => a1 : %d   \n", a);
    printf("f() => b1: %d   \n\n", b);
}
int main()
{
    extern int a; //!declaration not allowed for extern variables
    extern int c;
    // c = 0;
    // printf("main() => c : %d\n", c);
    a = 51;
    int b = 60;
    a++;
    b++;
    printf("main() => a : %d\n", a);
    printf("main() => b : %d\n\n", b);
    f();
    a++;
    b++;
    printf("main() => a1 : %d\n", a);
    printf("main() => b1 : %d\n\n", b);
    f();
    a++;
    b++;
    printf("main() => a2 : %d\n", a);
    printf("main() => b2 : %d\n\n", b);
    return (0);
}