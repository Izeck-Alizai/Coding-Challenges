#include<iostream>
using namespace std;

int main(void)
{
    int userInput, temp1, temp2, temp3;

    cout << "Enter 3-digit number: ";
    cin >> userInput;

    temp1 = userInput % 10;
    userInput = userInput / 10;
    temp2 = userInput % 10;
    userInput = userInput / 10;
    temp3 = userInput;

    cout << "\nReverse: " << temp1 << temp2 << temp3;
}