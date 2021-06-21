#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int &r = a; //r is an refernece variable. & is given to name an reference
    printf("%d", r);
    return 0;
}