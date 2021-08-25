#include <stdio.h>
int main()
{
    static int val = 5;
    if (val--)
    {
        main();
        printf("%d ", val);
    }
    return (0);
}