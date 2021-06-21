#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

void main()
{
    int num1 = 10, num2 = 15, sum = 0;
    sum = add(num1, num2);
    printf("%d", sum);
}
//any change in formala paramters will not change actual parameters