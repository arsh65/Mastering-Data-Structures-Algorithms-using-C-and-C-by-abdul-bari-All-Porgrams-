#include <iostream>
using namespace std;
int main()
{
    int *p;
    p = new int[5];
    p[0] = 10;
    p[1] = 11;
    p[2] = 12;
    p[3] = 120;
    p[4] = 233;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << "\n";
    }
    delete[] p; // to release the dynamically allocated memory in c++ "free()" is used in c
    return 0;
}