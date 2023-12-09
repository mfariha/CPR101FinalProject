// Prevents warnings for using potentially unsafe functions in Visual Studio
#define _CRT_SECURE_NO_WARNINGS

// Define the buffer size for storing input words
#define BUFFER_SIZE 300

// Include the header file that presumably contains function prototypes
#include "tokenizing.h"

int main() {
    tokenizing();
    return 0;
}
// Function to tokenize words
void tokenizing(void) {
    // Print a header for the tokenizing demo
    printf("*** Start of Tokenizing Words Demo ***\n");

    // Declare an array to store input words and a pointer to the next word
    char words[BUFFER_SIZE];
    char* nextWord = NULL;

    // Counter for the words
    int wordsCounter;

    // Main loop for tokenizing words
    do {
        // Prompt the user to type words (q to quit)
        printf("Type a few words separated by space (q - to quit) :\n");

        // Read input words from the user
        fgets(words, BUFFER_SIZE, stdin);

        // Remove the newline character at the end
        words[strlen(words) - 1] = '\0';

        // Check if the user wants to quit
        if (strcmp(words, "q") != 0) {
            // Tokenize the input words using space as the delimiter
            nextWord = strtok(words, " ");
            wordsCounter = 1;

            // Loop through the tokens and print each word
            while (nextWord) {
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
                nextWord = strtok(NULL, " ");
            }
        }
    } while (strcmp(words, "q") != 0);

    // Print a message indicating the end of the tokenizing demo
    printf("*** End of Tokenizing Words Demo ***\n\n");
}
