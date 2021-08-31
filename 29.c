#include <stdio.h>
struct node
{
    int a;
    float b;
    char c;
    char p;
    int z;
} g;
int main()
{
    struct node d;
    struct node *e;
    struct node **f;
    e = &d;
    f = &e;
    d.a = 10;
    d.b = 4.5;
    d.c = 'x';

    //*Allocation of bytes in memory is done in terms of multiples of 4, i.e. if a struct node requires 9 bytes only then remaining 3 bytes will be added to 9 bytes in order to make it the closest multiple of 4 which is 12. Similarly, the allocation can be done as : 4, 8, 12, 16, 20, 24, 28, etc... bytes of memory.

    printf("sizeof(int) : %d\n", sizeof(int));
    printf("sizeof(signed int) : %d\n", sizeof(signed int));
    printf("sizeof(unsigned int) : %d\n", sizeof(unsigned int));
    printf("sizeof(long long int) : %d\n", sizeof(long long int));
    printf("sizeof(long int) : %d\n", sizeof(long int));
    printf("sizeof(short int) : %d\n", sizeof(short int));
    printf("sizeof(char) : %d\n", sizeof(char));
    printf("sizeof(float) : %d\n", sizeof(float));
    printf("sizeof(double) : %d\n", sizeof(double));
    printf("sizeof(struct node) : %d\n", sizeof(struct node));
    printf("sizeof(g) : %d\n", sizeof(g));
    printf("sizeof(d) : %d\n", sizeof(d));
    printf("sizeof(e) : %d\n", sizeof(e));
    printf("sizeof(*e) : %d\n", sizeof(*e));
    printf("sizeof(**f) : %d\n", sizeof(**f));
    printf("sizeof(*f) : %d\n", sizeof(*f));
    printf("sizeof(f) : %d\n", sizeof(f));
    printf("sizeof(d.a) : %d\n", sizeof(d.a));
    printf("sizeof(d.b) : %d\n", sizeof(d.b));
    printf("sizeof(d.c) : %d\n", sizeof(d.c));

    printf("\n&d : %u\n", &d);
    printf("d : %u\n", d);
    printf("d.a : %d\n", d.a);
    printf("&d.a : %u\n", &d.a);
    printf("&d.z : %u\n", &d.z);
    printf("d.b : %f\n", d.b);
    printf("&d.b : %u\n", &d.b);
    printf("d.c : %c\n", d.c);
    printf("&d.c : %u\n", &d.c);
    printf("&d.p : %u\n", &d.p);
    printf("&d : %u\n", &d);
    printf("e : %u\n", e);
    printf("(e+1) : %u\n", (e + 1));
    printf("*e : %u\n", *e);
    // printf("%u\n", *e.a); //!expression must have struct or union type but it has type "struct node *". Here as '.' operator has higher precedence than '*' operator so without brackets, the compiler executes '.' first without executing '*' because of which error generates. As without going inside the struct which uses '*' operator, we can't access struct contents like int a, float b, char c ; using '.' operator. Therefore, use brackets around '*' operator in order to maintain the precedence among '*' and '.' operators.
    printf("(*e).a : %d\n", (*e).a); //? Here, we have used brackets around '*' operator. Hence, we don't get errors.
    printf("(*e).b : %f\n", (*e).b);
    printf("(*e).c : %c\n", (*e).c);
    printf("e->a : %d\n", e->a);
    printf("e->b : %f\n", e->b);
    printf("e->b with integer as format specifier : %d\n", e->b);
    printf("e->b with unsigned integer as format specifier : %u\n", e->b);
    printf("e->c : %c : ASCII CODE => %d\n", e->c, e->c);
    printf("e->p : %c\n", e->p);
    printf("e->z : %d\n", e->z);
    printf("(**f).c : %c\n", (**f).c);
    printf("(*f)->c : %c\n", (*f)->c);
    printf("(*f)->a : %d\n", (*f)->a);
    return 0;
}