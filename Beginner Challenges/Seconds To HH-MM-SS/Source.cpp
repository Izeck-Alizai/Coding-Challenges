#include<iostream>
using namespace std;

int main(void)
{
    int time;
    int hours, minutes, seconds;

    cout << "Enter time in seconds: ";
    cin >> time;

    hours = time / 3600;
    time = time % 3600;
    minutes = time / 60;
    seconds = time % 60;

    cout << "HH-MM-SS: " << hours << ":" << minutes << ":" << seconds;
}