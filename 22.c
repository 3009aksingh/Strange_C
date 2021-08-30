#include <stdio.h>
int main()
{
    float c[] = {70, 20, 60, 50, 10, 30};

    float *a[] = {c + 1, c + 2, c + 3, c, c + 4, c + 5};

    float **b = a;

    printf("1. b - a : %d - %d = %d \n 2. *b - c : %d - %d = %d \n 3. **b : %d", b, a, (b - a), *b, c, *b - c, **b);
    printf("\n\n");
    b + 2;
    *b + 1;
    printf("11. b - a : %d - %d = %d \n 22. *b - c : %d - %d = %d \n 33. **b : %d", b, a, (b - a), *b, c, *b - c, **b);
    // printf("\n\n1 : %d \n 2 : %d\n 3 : %d\n  4: %d\n 5: %d\n", c, b, a, *c, **b);
    printf("\n\n");
    // printf("\n01 : %d - %d = %d \n 02 : %d - %d = %d\n 03 : %d\n", c, b, (c - b), *c a, (*c - a), **b);
    ++**++b;
    printf("21. b - a : %d - %d = %d \n 22. *b - c : %d - %d = %d \n 23. **b : %d", b, a, (b - a), *b, c, *b - c, **b);
    // printf("\n101 : %d - %d = %d \n102 : %d - %d = %d\n103 : %d\n", c, b, (c - b), *c, a, (*c - a), **b);
    printf("\n\n");
    *++*(b + 2);
    printf("31. b - a : %d - %d = %d \n 32. *b - c : %d - %d = %d \n 33. **b : %d", b, a, (b - a), *b, c, *b - c, **b);
    printf("\n\n");
    // printf("\n\n201 : %d - %d = %d \n202 : %d - %d = %d\n203 : %d\n", c, b, (c - b), *c, a, (*c - a), **b);
}
