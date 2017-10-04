#include <conio.h>
#include <iostream>

using namespace std;
void main()
{
	cout << "please enter a 3 digit number senior: ";
	int original;
	cin >> original;
	cout << "\nthank you.\n";
	int onesDigit = original - (original / 10 * 10);
	int tensDigit = (original - (original / 100 * 100) - (onesDigit)) / 10;
	int hundredsDigit = (original - (original / 1000 * 1000) - onesDigit - tensDigit) / 100;

	bool ascending = onesDigit != tensDigit && tensDigit != hundredsDigit;
	bool descending = ascending;
	if (onesDigit > tensDigit)
		ascending = false;
	else
		descending = false;
	if (tensDigit > hundredsDigit)
		ascending = false;
	else
		descending = false;

	if (ascending)
		cout << "Ascending \n";
	else if (descending)
		cout << "Descending \n";
	else
		cout << "Neither";
	_getch();
}