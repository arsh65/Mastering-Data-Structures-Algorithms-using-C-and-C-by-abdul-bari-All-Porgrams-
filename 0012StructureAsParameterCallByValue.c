#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
};

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}
void main()
{

    struct Rectangle rect;
    rect.length = 10;
    rect.breadth = 20;
    printf("%d", area(rect));
}