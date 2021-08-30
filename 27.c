//? 3D Array is collection of 2D arrays, eg. a[i][j][k] where i denotes the number of 2D arrays, j denotes the number of rows in a 2D matrix and k denoted number of columns in a 2D matrix present in overall 3D matrix.

//? 2D matrix is collection of 1D arrays, eg. a[i][j] where i denotes the number of columns in a 2D matrix and j denotes the number of rows in a 2D matrix.
#include <stdio.h>
int a1[] = {6, 7, 8, 18, 34, 67};
int a2[] = {23, 56, 28, 29};
int a3[] = {-12, 27, -31};
int *x[] = {a1, a2, a3};
void print(int *a[])
{
    printf("%d\n", a[0][2]);
    printf("%d\n", *a[2]);
    printf("%d\n", *++a[0]);
    printf("%d\n", *(++a)[0]);
    printf("%d\n", a[-1][+1]);
    printf("%d\n", a[0][+1]);
    printf("%d\n", a[-1][0]);
    // printf("%d\n", a[-2][+1]); //!SEGMENTATION FAULT
    // printf("%d\n", a[-1][+2]);//!SEGMENTATION FAULT
    // printf("%d\n", a[-2][+2]);//!SEGMENTATION FAULT
}
int main()
{
    print(x);
}