#include <stdio.h>
struct node
{
    int data;
    int *next;
};
int main()
{
    struct node a, b, c, d, e;
    struct node *ptr = &a;
    a.data = 10;
    b.data = 20;
    c.data = 30;
    d.data = 40;
    e.data = 50;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    printf("ptr : %u\n", ptr);
    printf("*ptr : %u\n", *ptr);
    // printf("node *ptr->data : %u\n", *(ptr->data)); //!ERROR
    printf("node ptr->next : %u\n", (ptr->next));
    printf("ptr+1 : %u\n", ptr + 1);
    printf("*(ptr+1) : %u\n", *(ptr + 1));
    printf("*(ptr+2) : %u\n", *(ptr + 2));
    printf("*(ptr+0) : %u\n", *(ptr + 0));
    printf("*(ptr+10) : %u\n", *(ptr + 10));
    printf("node a base address(&a) : %u\n", &a);
    printf("node a base address(a) : %u\n", a);
    printf("node a base address(&a.data) : %u\n", &a.data);
    printf("node a base address(&a.next) : %u\n", &a.next);
    printf("a.next : %u\n", a.next);
    printf("node b base address(&b) : %u\n", &b);
    printf("node b base address(b) : %u\n", b);
    printf("node b base address(&b.data) : %u\n", &b.data);
    printf("node a base address(&b.next) : %u\n", &b.next);
    printf("node ptr->data : %u\n", ptr->data);
    printf("node a base address(a) : %u\n", a);
    printf("node a base address(a) : %u\n", a);
    printf("node a base address(a) : %u\n", a);
    return 0;
}