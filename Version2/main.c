// MAIN.C - FOR MAIN FUNCTION
// by Afra Alam for CPR101

#define _CRT_SECURE_NO_WARNINGS  // visual studio things
// Imports the header files of all modules
//#include "fundamentals.h" // Fundamentals
//#include "manipulating.h" // Manipulating
#include "converting.h" // Converting
//#include "tokenizing.h" // Tokenizing

// main function; displays a simple menu and goes to whatever function user selects
int main(void) {
	// buffer; clearing the input for each input
	char buff[10];

	// runs until user quits the program
	do
	{
		// displaying a simple menu, pressing a number will 
		// call its respective function or quit if 0
		printf("1 - Fundamentals\n"); // 1 for fundamentals
		printf("2 - Manipulation\n"); // 2 for manipulation
		printf("3 - Converting\n"); // 3 for converting
		printf("4 - Tokenizing\n"); // 4 for tokenizing
		printf("0 - Exit\n"); // 0 for exiting the program

		printf("Which module to run?\n");

		fgets(buff, 10, stdin); // getting user input and storing the valid input

		// matches input with its respective number and calls the function
		switch(buff[0])
		{
		//case '1': fundamentals(); // calls fundamentals
			break;     // for stopping the program from going to the next case
		//case '2': manipulating(); // calls manipulating
			break;    // for stopping the program from going to the next case
		case '3': converting(); // calls convering
			break;    // for stoppoing the program from going to the next case
		//case '4': tokenizing(); // calls tokenizing
			break;    // for stopping the program from going to the next case
		}
		
	} while (buff[0] != '0'); // if 0 is entered, program will leave the menu

	return 0; // for succesful run
}