// CONVERTING.C - CONVERTING LOGIC
// by Afra Alam for CPR101

#define _CRT_SECURE_NO_WARNINGS // visual studio stuff
#define BUFFER_SIZE 80 // buffer for clearing user input
#include "converting.h" // Imports header file

void converting() {
/* Version 1 */
	printf("*** Start of Converting Strings to int Demo ***\n"); // displaying demo title

	// LOCAL VARIABLES
	char intString[BUFFER_SIZE]; // storing user input as string with buffer limit
	int intNumber; // stores user input as an int after conversion

	// runs until user inputs "q"
	do {
		printf("Type an int numeric string (q - to quit):\n"); // prompts the user to enter a numeric string
		fgets(intString, BUFFER_SIZE, stdin); // stores user input in intString with buffer limit

		intString[strlen(intString) - 1] = '\0'; // adds null terminator at the end of the string 

		if (strcmp(intString, "q") != 0) {  // goes here if does not start with a q
			intNumber = atoi(intString);   // converting string to an int until first instance of a nonnumber
			printf("Converted number is %d\n", intNumber); // displays converted int
		}
	} while (strcmp(intString, "q") != 0); // exits the loop when q is entered

	printf("*** End of Converting Strings to int Demo ***\n\n");  // end message


}
