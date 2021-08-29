#include <stdio.h>
int main()
{
    char a[] = "gate2011";
    char b[] = "\0gate2021\0";
    printf("BEGINS!!");
    for (int i = 0; i <= 10; i++)
    {
        printf("\n%c", b[i]); //? '\0' character is printed as empty character in output.
    }
    printf("\n\0");
    for (int i = 0; i <= 10; i++)
    {
        printf("%c", a[i]);
        // printf("\n");
        // printf("%s", a[i]);//!SEGMENTATION FAULT
    }
    printf("\n\0");
    printf("\n1 %s\n", a);
    printf("2 %c\n", a);
    printf("3 %d\n", a);
    printf("4 sizeof(a) with '%c' %c\n", sizeof(a));
    printf("5 sizeof(a) with '%c' %d\n", sizeof(a));
    printf("6 sizeof(a) : %d\n", sizeof(a));
    printf("7  strlen(a) : %c\n", strlen(a));
    printf("8 strlen1 : %d\n", strlen(a));
    // printf("10 %s\n", *a);//!SEGMENTATION FAULT
    printf("130 %s\n", a);
    printf("150 %c\n", a);
    printf("160 %c\n", *a);
    //a = a + 5; =>//!ERROR => because we can't change the address of any index of the array .i.e. expression must be a modifiable lvalue.
    //&a = 2000;//!ERROR => because we can't change the address of any index of the array .i.e. expression must be a modifiable lvalue.
    printf("9 %s\n", a + a[3] - a[1]);
    // printf("9 %s\n", a[0] + a[3] - a[1]);//!SEGMENTATION FAULT
    printf("10 %s\n", a + 5);
    printf("11 %s\n", a + 9);
    printf("12 %s\n", a + 8);
    printf("123 %s\n", a + 80);
    printf("114 %c\n", a + 90);
    printf("102 %c\n", a + 5);
    printf("113 %c\n", a + 9);
    printf("125 %c\n", a + 8);
    printf("136 %c\n", (*a + 5));
    //printf("13 %s\n", (*a + 5)); //!SEGMENTATION FAULT
    // printf("13 %s\n", *(a + 5)); //!SEGMENTATION FAULT
    printf("14 %s\n", *(a + 9));
    printf("\n15 %c   ", 'a');
    printf("\n16 %d     ", 'a');
    printf("\n17 %d  ", '\0');
    int val = sizeof("abcdefghi/0");
    printf("\n18 int : %d", val);
    int val0 = sizeof('\0');
    printf("\n19 int0 : %d", val0);
    long int val1 = sizeof('\0');
    printf("\n20 long long int : %ld", val1);
    char val2 = sizeof('\0');
    printf("\n21 char : %c                      ", val2);
    int val3 = sizeof('\0/0');
    printf("\n22 int3 : %d", val3);
    int val4 = sizeof('h\0');
    printf("\n23 int4 : %d", val4);
    printf("\n24 int5 : %d", sizeof('h\0'));
    printf("\n25 int6 : %d", sizeof('\0'));
    return (0);
}
