#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[] = {2, 4, 6, 7, 8, 9}; // created inside stack frame
    int *p = a;                   // pointer to an array

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", p[i]);
    };
}