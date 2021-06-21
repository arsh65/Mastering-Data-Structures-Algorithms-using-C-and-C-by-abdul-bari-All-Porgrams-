#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

void fun(int A[])
{
    cout << sizeof(A) / sizeof(int) << endl;
}
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int n = 5;
    for (int x : A) //for each loop
    {
        printf("%d", x);
    }
    return 0;
}