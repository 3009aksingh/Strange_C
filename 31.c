#include <stdio.h>
int main()
{
    int i = 300;
    char *ptr = (char *)&i;
    *++ptr = 2;
    printf("Output : %d\n", i);
}