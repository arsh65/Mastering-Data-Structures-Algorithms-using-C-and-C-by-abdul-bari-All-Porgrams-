#include <iostream>
//call by reference is only available in c++ not in c
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void area(struct Rectangle &r)
{
    printf("%d", (r.length * r.breadth));
}
int main()
{
    struct Rectangle rect = {19, 20};
    area(rect);
    return 0;
}