#include <stdio.h>
int f(int *a, int n)
{
    int val;
    if (n <= 0)
    {
        // val = (*a + f(a + 1, n - 1));
        // printf("\n%d", val);
        return 0;
    }
    else
    {
        if (*a % 2 == 0)
        {
            val = (*a + f(a + 1, n - 1));
            printf("\n%d", val);
            return (*a + f(a + 1, n - 1));
        }
        else
        {
            val = (*a - f(a + 1, n - 1));
            printf("\n%d", val);
            return (*a - f(a + 1, n - 1));
        }
    }
}
int main()
{
    int a[6] = {10, 77, 55, 24, 30, 67};
    printf("\nOutput : %d  ", f(a, 6));
    return 0;
}