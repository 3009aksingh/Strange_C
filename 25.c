#include <stdio.h>
int main()
{
    int a = 5;
    printf("%d %d %d ", a++, a++, a++); //!printf starts scanning from RHS and on the way keeps post increementing, it somewhat saves data in %d to print like firstly the rightmost a will be scanned for post increementation ; as the value of a is 5 presently so 5 should be printed then post incrementation will update a = 6; same goes for left 2 post increementation. That's why 7 6 5 gets printed.
    printf("%d %d %d", ++a, ++a, ++a);  //!this is also special.
    printf(" %d", a++);
    printf(" %d", a++);
    printf(" %d", a++);
}