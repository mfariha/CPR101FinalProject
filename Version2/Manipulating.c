#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"


void manipulating(void)
{
	//v1
	//Function to concatenate two user input strings into one string (first string)
	///////////////////////////////////////////////////////////////////////////////////////////////////

	printf("**** Start of Concatenating Strings Demo *** \n");
	//Variables declared (function scope only) to store user string input for concatenation
	char string1[BUFFER_SIZE];
	char string2[BUFFER_SIZE];
	//DO-WHILE Loop which prompts user to start entering the string but can exit loop by pressing 'q'
	do
	{
		printf("Type the first string (q - to quit):\n");
		//User input stored in variable string1; string length must be BUFFER_SIZE-1
		fgets(string1, BUFFER_SIZE, stdin);
		//Null terminator added to string1
		string1[strlen(string1) - 1] = '\0';
		/*IF - Loop to compare the first user input
		If user does not press 'q' to quit, then proceed to accept second user input*/
		if ((strcmp(string1, "q") != 0))
		{
			printf("Type the second string:\n");
			//User input stored in variable string2; string length must be BUFFER_SIZE-1
			fgets(string2, BUFFER_SIZE, stdin);
			//Null terminator added to string2
			string2[strlen(string2) - 1] = '\0';
			//Concatenate string2 to string1
			strcat(string1, string2);
			printf("Concatenated string is \'%s\'\n", string1);
		}
	} while (strcmp(string1, "q") != 0);
	printf("**** End of Concatenating Strings Demo *** \n\n");
	//v2
//Function to compare two user input strings and output whether they are same, smaller or greater
///////////////////////////////////////////////////////////////////////////////////////////////////

	printf("*** Start of Comparing Strings Demo ***\n");
	//Variables declared (function scope only) to store user string input for comparison
	char compare1[BUFFER_SIZE];
	char compare2[BUFFER_SIZE];
	//Variable to store result of string comparison (which returns an int)
	int result;
	//DO-WHILE Loop which prompts user to start entering the string but can exit loop by pressing 'q'
	do
	{
		printf("Type the first string to compare (q - to quit):\n");
		//User input stored in variable compare1; string length must be BUFFER_SIZE-1
		fgets(compare1, BUFFER_SIZE, stdin);
		//Null terminator added to compare1
		compare1[strlen(compare1) - 1] = '\0';

		/*IF - Loop to compare the first user input
		If user does not press 'q' to quit, then proceed to accept second user input*/
		if (strcmp(compare1, "q") != 0)
		{
			printf("Type the second string to compare:\n");
			//User input stored in variable compare2; string length must be BUFFER_SIZE-1
			fgets(compare2, BUFFER_SIZE, stdin);
			//Null terminator added to compare2
			compare2[strlen(compare2) - 1] = '\0';
			//Using strcmp to compare two user input strings and return an integer value stored in result
			result = strcmp(compare1, compare2);
			//Inform user what the different values of result means about the two strings (positive, negative, zero)
			if (result < 0)
			{
				printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
			}
			else if (result == 0)
			{
				printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
			}
			else
			{
				printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
			}
		}
	} while (strcmp(compare1, "q") != 0);
	printf("*** End of Comparing Strings Demo ***\n\n");
}