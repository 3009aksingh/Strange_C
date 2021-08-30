#include <stdio.h>
int main()
{
    int a[3][5] = {{10, 20, 30, 40, 50}, {60, 70, 80, 90, 100}, {110, 120, 130, 140, 150}};
    printf("2D Array is : \n\n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");
    printf("%u\n", a);

    printf("%u\n", *a);
    printf("%u\n\n", a[0]);
    printf("%u\n", a[2]);
    printf("%u\n\n", a + 2);
    printf("1. %u\n 2. %u \n3. %u\n 4. %u\n 5. %u \n6. %u \n7. %u \n8. %u \n9. %u \n10.%u \n11.%u \n12. %u\n 13.%u\n\n", a + 2, **(a + 2), *a + 2, *(*a + 2), a[2] + 3, *(a + 2) + 3, *(*(a + 2) + 3), *(a[2] + 3), *a[2] + 3, a[2][3] + 3, *a[2], a[2][0], a[0][2]);
    printf("%u %u %u %u %u %u %d\n\n", *(a + 2) + 7, **(a + 2) + 7, **(a + 3), **a + 3, a + 3, &a, **a + 7);
}