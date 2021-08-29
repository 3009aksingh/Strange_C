#include <stdio.h>
int main()
{
    int a = 10;
    float b = 20.3;
    char c = 'd';
    int *d = &a;
    float *e = &b;
    char *f = &c;
    printf("%ld %ld %ld\n %ld %ld %ld\n %ld %ld %ld ", sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(e), sizeof(f), sizeof(*d), sizeof(*e), sizeof(*f));
    return (0);
}