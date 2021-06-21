#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
};

void area(struct Rectangle *r)
{
    printf("%d", r->length * r->breadth);
}
void main()
{
    struct Rectangle rect = {10, 20};
    area(&rect);
}