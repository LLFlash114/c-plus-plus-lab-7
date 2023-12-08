/*-------------------------------------------
// Course: COMP 150
// Last Name: Singh
// First Name: Rajveer
// Student ID: 300202522
// 
// File: citiesLab72__Singh_RS
//
// Summary: Stores 6 key pre-defined information about a wrestler for 4 wrestlers using a structure and member variables.
			Then prompts the user to enter information for a new wrestler, and the program stores it into the structure.
			Outputs all wrestlers in descending order based on the number of world championships they've won.             	           
//
*-------------------------------------------*/

#include<iostream>
#include<string>
using namespace std;

// Storing global variables
const int SIZE = 5;

// Storing structures
struct WrestlerInformation {
	string ring_name;
	string real_name;
	string height;
	int weight;
	int world_championships;
	string finisher;
	
} wrestler01{"Stone Cold", "Steve Austin", "6'2\"",252, 6, "Stunner"},
  wrestler02{"Becky Lynch", "Rebecca Quin", "5'6\"",135, 5, "Springboard Legdrop"}, 
  wrestler03{"Edge", "Adam Joseph Copeland", "6'5\"",240, 11, "Spear"}, 
  wrestler04{"AJ Styles", "Allen Neal Jones", "5'10\"",218, 2, "Styles Clash"}, 
  wrestler_list[SIZE];

// Function prototypes
void get_data(WrestlerInformation& wrestler);
void sortArrayChampionships(WrestlerInformation array[], int array_size);

int main()
{
	// Initializing user entered wrestler and storing wrestler_list items
	WrestlerInformation user_wrestler;
	
	wrestler_list[0] = wrestler01;
	wrestler_list[1] = wrestler02;
	wrestler_list[2] = wrestler03;
	wrestler_list[3] = wrestler04;
	
	// Prompting user for custom wrestler data and storing it
	get_data(user_wrestler);
	wrestler_list[4] = user_wrestler;
	
	// Sorting wrestlers by the the number of world championship wins <-- descending
	sortArrayChampionships(wrestler_list, SIZE);

	// Outputting all wrestlers in the array
 	for (int i = 0; i < SIZE; i++)
 	{
 		cout << "\nRing name of a wrestler: " << wrestler_list[i].ring_name;
		cout << "\nReal name: " << wrestler_list[i].real_name;
		cout << "\nHeight: " << wrestler_list[i].height;
		cout << "\nWeight: " << wrestler_list[i].weight;
		cout << "\nNumber of World Championship wins: " << wrestler_list[i].world_championships;
		cout << "\nThe wrestler's finisher is the: " << wrestler_list[i].finisher << endl;
	}

	return 0;
}

// Functions

/*----------------------------------------------------------------------*/
/* This function prompts the user to enter information for a wrestler   */
/* Preconditions: variable that will store the new wrestler information */
/* Postcondition: updates the variable	  								*/
void get_data(WrestlerInformation& wrestler)
{
	cout << "Enter the wrestler's ring name: ";
	getline(cin,wrestler.ring_name);
	
	cout << "Enter the wrestler's real name: ";
	getline(cin,wrestler.real_name);
	
	cout << "Enter the height (example 6'5\"): ";
	getline(cin,wrestler.height);
	
	cout << "Enter the weight in pounds: ";
	cin >> wrestler.weight;
	
	cout << "Enter the number of world championship wins: ";
	cin >> wrestler.world_championships;
	cin.ignore();
	
	cout << "The wrestler's finisher is the (example RKO): ";
	getline(cin,wrestler.finisher);
}

/*--------------------------------------------------------------------------------------------------------------*/
/* This function sorts the wrestlers in an array by the number of world championship wins, in descending order  */
/* Function is based on the bubbleSort c++ file from lecture 07, with some modifications						*/
/* Preconditions: array that is to be sorted and the size of the array 											*/
/* Postcondition: updates the array why sorting the wrestlers	  												*/
 void sortArrayChampionships(WrestlerInformation array[], int array_size)
 {
 	// Storing variables
 	bool swap;
	WrestlerInformation temp;
 	
 	// Sorting by descending world championship wins 
 	do
 	{
		swap = false;
		for (int count = 0; count < (array_size-1); count++)
		{
			if (array[count].world_championships < array[count+1].world_championships)
			{
				temp = array[count];
				array[count] = array[count+1];
				array[count+1] = temp;
				swap = true;
			}
		}
 	}while (swap);
 }


