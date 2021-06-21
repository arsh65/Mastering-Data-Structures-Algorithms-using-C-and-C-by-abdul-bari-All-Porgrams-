//array inside heap
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *p;
    p = (int *)malloc(4 * sizeof(int));
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", p[i]);
    }
    free(p); //to release the dynamically allocated memory in c
}