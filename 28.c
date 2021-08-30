#include <stdio.h>
int main()
{
    int arr[] = {20, 30, 40};
    char *p, *p2;
    printf("arr : %d\n", arr);
    // printf("%d\n", *p); //!SEGMENTATION FAULT : Here as of now arr is not assigned to *p that's why.
    printf("p : %d\n", p);
    p = (char *)(arr);
    printf("p[0] : %d\n p[1] : %d\n p[2] : %d\n", p[0], p[1], p[2]);
    printf("arr : %d\n", arr);
    printf("*arr : %d\n", *arr);
    printf("*arr+1 : %d\n", *arr + 1);
    printf("*(arr+1) : %d\n", *(arr + 1));
    printf("p : %d\n", p);
    printf("*p : %d\n", *p); //? Here, arr has been assigned to *p at line no.9
    printf("*p+1 : %d\n", *p + 1);
    printf("*p+0 : %d\n", *p + 0);
    printf("*p+10 : %d\n", *p + 10);
    printf("*(p+1) : %d\n", *(p + 1));
    printf("*(p+0) : %d\n", *(p + 0));
    p = p + 1;
    printf("*p : %d\n", *p);
    p = p + 10;
    printf("*p : %d\n", *p);
    printf("p[0] : %d\n p[1] : %d\n p[2] : %d\n", p[0], p[1], p[2]);
    p2 = (char *)(arr + 1);
    printf("arr : %d\n", arr);
    // printf("%d\n", *p); //!SEGMENTATION FAULT : Here as of now arr is not assigned to *p that's why.
    printf("p2 : %d\n", p);
    printf("p2[0] : %d\n p2[1] : %d\n p2[2] : %d\n", p2[0], p2[1], p2[2]);
    printf("arr : %d\n", arr);
    printf("*arr : %d\n", *arr);
    printf("*arr+1 : %d\n", *arr + 1);
    printf("*(arr+1) : %d\n", *(arr + 1));
    printf("p2 : %d\n", p2);
    printf("*p2 : %d\n", *p2); //? Here, arr has been assigned to *p at line no.9
    printf("*p2+1 : %d\n", *p2 + 1);
    printf("*p2+0 : %d\n", *p2 + 0);
    printf("*p2+10 : %d\n", *p2 + 10);
    printf("*(p2+1) : %d\n", *(p2 + 1));
    printf("*(p2+0) : %d\n", *(p2 + 0));
    p2 = p2 + 1;
    printf("*p2 : %d\n", *p2);
    p2 = p2 + 10;
    printf("*p2 : %d\n", *p2);
    printf("p2[0] : %d\n p2[1] : %d\n p2[2] : %d\n", p2[0], p2[1], p2[2]);
    return 0;
}