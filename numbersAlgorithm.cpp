#include <conio.h>
#include <iostream>

using namespace std;
void main()
{
    cout << "please enter a 3 digit number senior: ";
    int original;
    cin >> original;
    cout << "\nthank you.";
    int onesDigit = original - (original / 10 * 10);
    int tensDigit = (original - (original / 100 * 100) - (onesDigit)) / 10;
    int hundredsDigit = (original - (original / 1000 * 1000) - onesDigit - tensDigit) / 100;
}