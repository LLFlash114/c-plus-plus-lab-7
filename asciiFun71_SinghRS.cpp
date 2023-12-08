/*-------------------------------------------
// Course: COMP 150
// Last Name: Singh
// First Name: Rajveer
// Student ID: 300202522
// 
// File: asciiFun71_singhRS
//
// Summary:    Performs 2 mechanisms:
//
//			-- Prompts user for an uppercase character and converts it to a matching lowercase character
//			-- Prompts user for an uppercase, lowercase, or number(0-9) character and outputs the ASCII character group it belongs to              	           
//           	           
*-------------------------------------------*/

#include<iostream>
#include<iomanip>
#include<time.h>
using namespace std;

int main()
{
	/* Example Code */
	//int numInput, addNum;
	//char charInput = 'A';
	/*clock_t t1;
	
	cout << charInput << " is " << (int)charInput << " in ASCII value.\n" << endl;
	
	cout << "Enter any integer between 0 to 255: ";
	cin >> numInput;
	cout << "ASCII value of " << numInput << " is " << (char)numInput << endl;
	
	cout << "\nEnter any integer to increment current ASCII value:";
	t1 = clock();
	cin >> addNum;
	
	t1 = clock() - t1;
	printf("\nEntering a number took %d ticks (%f seconds).\n\n", t1, ((float)t1) / CLOCKS_PER_SEC);
	cout << "An updated ASCII value " << "is " << numInput + addNum << ": " << (char)(numInput + addNum) << endl;*/
	
	/* My Code */
	char user_uppercase_letter, user_character;
	
	// Getting uppercase character from the user
	cout << "\nEnter any letter character in upper case to see the equivalent lowercase ASCII value." << endl;
	cout << "Uppercase letter: ";
	cin >> user_uppercase_letter;
	
	// Checking to see if an uppercase character was entered
	while((int)user_uppercase_letter < 65 || (int)user_uppercase_letter > 90)
	{
		cout << "\n********************************"  << endl;
		cout << "ERROR: Invalid character entered" << endl;
		cout << "********************************"  << endl;
		cout << "Enter an uppercase letter A-Z: ";
		cin >> user_uppercase_letter;
	}
	
	// Outputting the uppercase to lowercase conversion summary
	cout << endl;
	cout << user_uppercase_letter << " is " << (int)user_uppercase_letter << " in ASCII value." << endl;
	cout << (char)((int)user_uppercase_letter + 32) << " is " << (int)user_uppercase_letter + 32 << " in ASCII value." << endl;
	
	
	// Getting an uppercase, lowercase, or number character from the user
	cout << "\nEnter any uppercase, lowercase, or number (0-9) character to see which ASCII character group it belongs to." << endl;
	cout << "Character: ";
	cin >> user_character;
	
	// Outputting the ASCII character group it belongs to
	cout << "\nYour character: " << user_character << endl;
	if ((int)user_character >= 48 && (int)user_character <= 57)
	{
		cout << "You entered the number " << user_character << "!" << endl;
	}
	else if (user_character >= 65 && user_character <= 90)
	{
		cout << "You entered the uppercase letter " << user_character << "!" << endl;
	}
	else if (user_character >= 97 && user_character <= 122)
	{
		cout << "You entered the lowercase letter " << user_character << "!" << endl;
	}
	else // Error checking, if character is not an uppercase, lowercase, or number
	{
		cout << "The character entered is not an uppercase letter, lowercase letter, or a number (0-9)." << endl;
	}
	
	return 0;
}



