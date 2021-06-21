#include <stdio.h>
#include <stdlib.h>
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{

    struct Rectangle r1;
    struct Rectangle *p = &r1; //static object
    struct Rectangle *e;       //variable of type structure in heap (dynaic object)

    //different ways of accessing length and breadth of r1
    r1.length = 15;
    (*p).length = 20; //p is enclosed in an bracket since precendence of dot(.)operator is more that (*).
    p->length = 20;   // another simple way in C to accessing structure member via pointer
    printf("%d\n", p->length);

    e = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // for c++   p = new Rectangle;
    e->length = 10;
    e->breadth = 20;
    printf("%d", e->length);
    return 0;
}