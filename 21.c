#include <stdio.h>
int main()
{
    int a[6] = {10, 20, 30, 40, 50, 60};
    int *b[] = {a + 2, a + 3, a, a + 1, a + 4, a + 5};
    printf("a1 : %d \n a2 : %d\n a3 : %d\n  a4: %d\n a5 : %d\n", a, a + 1, a + 2, a + 3, a + 4, a + 5);
    printf("\nb1 : %d \n b2 : %d\n b3 : %d\n  b4: %d\n b5 : %d\n", b, b + 1, b + 2, b + 3, b + 4, b + 5);
    int **c = b;
    printf("\nc1 : %d \n c2 : %d\n c3 : %d\n  c4: %d\n c5 : %d\n", c, c + 1, c + 2, c + 3, c + 4, c + 5);
    *c++;
    printf("\n\n1 : %d \n 2 : %d\n 3 : %d\n  4: %d\n", c, b, a, *c, **c);
    printf("\n01 : %d - %d = %d \n 02 : %d - %d = %d\n 03 : %d\n", c, b, (c - b), *c, a, (*c - a), **c);
    *++*c++;
    printf("\n11 : %d \n 22 : %d\n 33 : %d\n", (c - b), (*c - a), **c);
    ++**c++;
    printf("\n111 : %d \n 222 : %d\n 333 : %d\n", (c - b), (*c - a), **c);
}
