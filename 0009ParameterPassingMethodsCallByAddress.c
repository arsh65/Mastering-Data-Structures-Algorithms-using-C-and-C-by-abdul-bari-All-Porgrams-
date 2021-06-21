#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void main()
{
    int num1 = 10;
    int num2 = 20;
    swap(&num1, &num2);
    printf("%d\n", num1);
    printf("%d\n", num2);
}

//when we need a function to directly work upon actual parameter, use call by address
//in call by address actual paramaters are modified