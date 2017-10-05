Hey everyone! if you want to see our code, download source222222222222.cpp! the final program is projectexe.exe

# Three_Digit_Ascend_Descend_Selection
 -Program Problem 3 
 
## Program Problem 3 :  Three_Digit_Ascend_Descend_Selection
 
Assume that a completely trustworthy and perfect user comes along and will enter a 3 digit number into your program
as you ask for it. Create a new empty project and make sure you have a header that includes both of your names on the project. 

# 1.	Ask for the completely trustworthy and perfect user to enter a 3 digit number into your program.

# 2.	Store that number into a variable.

# 3.	Take that variable and separate each of the three digits into separate variables. 

# 4.	Using those and selection of some nature. Print out whether the Number is Ascending or Descending based on the fact that each number is less than or greater than the previous number. 

# 5.	Once this is done, go back over your code, and make sure you have comments so that your code is clearly understood by every member of the class.

## Below is a template to start your program:

/*

Your Name - Date Period 

Assignment Name : *

Brief Description of the Assignment

*/

// Libraries

#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std;

// Functions() 

void pause() {

	cout << "Press any key to continue . . .";
  
	while (!_kbhit());
  
	_getch();
  
	cout << '\n';	
  
}

// MAIN

void main() { 

	pause(); // pauses to see the displayed text
  
} 
 


