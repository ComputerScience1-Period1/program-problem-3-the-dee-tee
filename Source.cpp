#include <conio.h>
#include <iostream>

using namespace std;
void main()
{
	cout << "please enter a 3 digit number senior: ";
	int original;
	cin >> original;
	cout << "\n thank you.\n";
	int onesDigit = original - (original / 10 * 10);
	int tensDigit = (original - (original / 100 * 100) - (onesDigit)) / 10;
	int hundredsDigit = (original - (original / 1000 * 1000) - onesDigit - tensDigit) / 100;
	if (onesDigit > tensDigit && tensDigit > hundredsDigit) {
		cout << "Descending";
	}
	else if (hundredsDigit > tensDigit && tensDigit > hundredsDigit) {
		cout << "Ascending";
	}
	else {
		cout << "Neither ascending nor descending";
	};

	pause();
}
