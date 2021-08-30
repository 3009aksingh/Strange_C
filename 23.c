#include <stdio.h>
int main()
{
    char *a[] = {"buffalo", "Pig", "Dog", "Pappa", "Bacha", "Modiji", "Didiji"};
    char **b[] = {a + 2, a + 3, a + 6, a + 5, a, a + 1, a + 4};
    char ***c = b;
    printf("99. %d\n", *c);
    printf("97. %d\n", b[0]);
    // printf("98. %c\n", ***c++);
    printf("98. %s\n", **c++);
    printf("98 **c: %d\n", **c);
    printf("98 *c: %d\n", *c);
    printf("98. b[1] %d\n", b[1]);
    // printf("981. %s\n", **++c);
    printf("96. %d\n", (c + 3));
    printf("95. %d\n", *(c + 3));
    printf("94. %d\n", b[4]);
    printf("93. %d\n", *b[4]);
    printf("92. %d\n", a[0]);
    printf("91. %s\n", a[0]);
    printf("1. **(c + 3) + 2 : %s\n", **(c + 3) + 2);
    ***c + 2;

    printf("2. *(**c + 2) + 5 : %c\n", *(**c + 2) + 5);
    printf("3. %c\n", *(**c + 2) + 7);
    printf("4. %c\n", *(**c + 4));
    printf("5. %c\n", *(**c + 4)); //*NULL character of string '\0'
    printf("6. %c\n", *(**c + 2));
    ***++c;
    ***c++;
    printf("7. %s\n", (**c + 2));
    printf("8. %s\n", (**c + 2) + 2);
    printf("9. %d\n", *c); //?location address of location where pointer c is pointing at.
    printf("10. %d\n", b[3]);
    printf("11. %d\n", c);    //?location address of pointer c
    printf("12. %d\n", b);    //?location address of pointer b
    printf("13. %d\n", b[0]); //?location address of first index of array
}