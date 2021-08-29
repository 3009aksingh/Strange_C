#include <stdio.h>
int main()
{
    int a = 10;
    int *b = &a;
    printf("Enter a random number and press enter: ");
    scanf("%d", b); //! NO ERROR :) => b itself is an address of a so whatever the input we give gets stored in the address stored in b variable. So, b contains a's address, that's why a gets modified with the new input.
    printf("\nOutput is : %d", a + 50);
    return (0);
}