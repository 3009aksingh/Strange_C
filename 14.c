#include <stdio.h>
int main()
{
    int a = 10;
    int *b = &a;
    // printf("%d", a * *b); //* error
    // printf("%d", a * *b); //? error
    printf("%d", a * *b); //!compiler dependent
    return (0);
}