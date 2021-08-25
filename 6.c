#include <stdio.h>
int f(int n)
{
    static int r = 0;
    if (n <= 1)
        return 2;
    if (n > 3)
        return (f(n - 2) + 2);
    r = n;
    return (r + f(n - 1));
}
int main()
{
    int n = 5;
    printf(" Output is : %d ", f(n));
    return (0);
}