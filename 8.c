#include <stdio.h>
int main()
{
    int m = 10, n = 20;
    if (0.5)
        printf("%d  1  \n", m);
    if (0.05)
        printf("%d    2  \n", m);
    if (!0.05)
        printf("%d    0.05 isn't here! \n", m);
    if (0.000)
        printf("%d    3\n", m);
    if (!0.000)
        printf("%d    0.00 isn't here!\n", m);
    if (0.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001)
        printf("%d     4\n", m);
    if ('/')
        printf("%d       5     \n", m);
    if (!NULL)
        printf("%d   hello NULL isn't here!\n", m);
    if (NULL)
        printf("%d   hello NULL here!\n", m);
    if (!'0')
        printf("%d  NOT of zero character here\n", m);
    if ('0')
        printf("%d    zero character here\n", m);
    if (1)
        printf("%d   String NULL \0 \ncharacter here\n", m);
    if (1)
        printf("%d   \nString NULL with single inverted'\0' character here\n", n);
    if ('\0')
        printf("%d   String NULL \0 character here\n", m);
    return (0);
}
