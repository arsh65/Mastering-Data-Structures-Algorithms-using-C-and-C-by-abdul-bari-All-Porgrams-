#include <stdlib.h> //for using functions like malloc{used to allocate memory in Heap and returns a void pointer thus need to be typecasted} etc.
#include <stdio.h>
//new is an operator used in c++ instead of malloc which is used in c
void main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("%d\n", a);
    printf("%d \n", *p);     //value stored at the address which p contains i.e address of a
    printf("%d, %d", p, &a); //address of a
}