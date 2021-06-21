#include <stdio.h>
#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct Rectangle aNewRectangle;
    printf("Enter Length & Breadth respectively\n");
    scanf("%d %d", &aNewRectangle.length, &aNewRectangle.breadth);
    printf("printing...");
    printf("%d %d", aNewRectangle.length, aNewRectangle.breadth);
    return 0;
}
