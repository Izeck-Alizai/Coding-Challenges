#include<iostream>
using namespace std;

int main(void)
{
    int var1 = 5, var2 = 10;

    cout << "Var1 Before: " << var1;
    cout << endl;
    cout << "Var2 Before: " << var2;

    cout << endl << endl;

    var1 = var1 + var2;
    var2 = var1 - var2;
    var1 = var1 - var2;

    cout << "Var1 After: " << var1 << endl;
    cout << "Var2 After: " << var2 << endl;
}