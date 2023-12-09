// Prevents warnings for using potentially unsafe functions in Visual Studio
#define _CRT_SECURE_NO_WARNINGS

// Define the buffer size for storing input phrases
#define BUFFER_SIZE 300

// Include the header file that presumably contains function prototypes
#include "tokenizing.h"

// Function to tokenize phrases
void tokenizing(void) {
    // Print a header for the tokenizing demo
    printf("*** Start of Tokenizing Phrases Demo ***\n");

    // Declare an array to store input phrases and a pointer to the next phrase
    char phrases[BUFFER_SIZE];
    char* nextPhrase = NULL;

    // Counter for the phrases
    int phrasesCounter;

    int main() {
        tokenizing();
        return 0;
    }
    // Main loop for tokenizing phrases
    do {
        // Prompt the user to type phrases (q to quit)
        printf("Type a few phrases separated by comma (q - to quit):\n");

        // Read input phrases from the user
        fgets(phrases, BUFFER_SIZE, stdin);

        // Remove the newline character at the end
        phrases[strlen(phrases) - 1] = '\0';

        // Check if the user wants to quit
        if (strcmp(phrases, "q") != 0) {
            // Tokenize the input phrases using comma as the delimiter
            nextPhrase = strtok(phrases, ",");
            phrasesCounter = 1;

            // Loop through the tokens and print each phrase
            while (nextPhrase) {
                printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
                nextPhrase = strtok(NULL, ",");
            }
        }
    } while (strcmp(phrases, "q") != 0);

    // Print a message indicating the end of the tokenizing demo
    printf("*** End of Tokenizing Phrases Demo ***\n\n");
}
