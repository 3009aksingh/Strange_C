#include <stdio.h>
int main()
{
    int a[4][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}};
    printf("2D Array is : \n\n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("Output : %d\n", *(*(a + **a + 2) + 3));
}