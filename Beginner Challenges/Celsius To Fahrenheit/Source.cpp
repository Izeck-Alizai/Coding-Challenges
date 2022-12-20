#include<iostream>
using namespace std;

int main(void)
{
    float celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (9 / 5 * celsius) + 32;

    cout << "\nTemperature in Fahrenheit: " << fahrenheit;
}