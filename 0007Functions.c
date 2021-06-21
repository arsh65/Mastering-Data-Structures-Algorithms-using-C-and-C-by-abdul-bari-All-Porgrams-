#include <stdio.h>
#include <stdlib.h>

//function declaration
int add(int a, int b);

void main()
{
    //this is a simple illustration
    printf("%d", add(1, 2));
}

//function definition
int add(int a, int b)
{
    return a + b;
}