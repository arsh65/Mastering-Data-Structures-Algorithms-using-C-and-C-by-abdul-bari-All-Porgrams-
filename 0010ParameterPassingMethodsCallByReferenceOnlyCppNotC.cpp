#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int num1 = 10;
    int num2 = 20;
    swap(num1, num2);
    cout << num1 << "\n";
    cout << num2 << "\n";
    return 0;
}

//This is call by reference Only available in c++ not in c
//reference is kinda nickname of a variable
//c++ supports inline function and swap function may become inline function(not necessary)
//depends on how compiler implement reference function, to become an inline fucntion all
//the parameters should be reference