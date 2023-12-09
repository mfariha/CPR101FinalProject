// Prevents warnings for using potentially unsafe functions in Visual Studio
#define _CRT_SECURE_NO_WARNINGS

// Define the buffer size for storing input sentences
#define BUFFER_SIZE 300

// Include the header file that presumably contains function prototypes
#include "tokenizing.h"
    int main() {
        tokenizing();
        return 0;
    }

// Function to tokenize sentences
void tokenizing(void) {
    // Print a header for the tokenizing demo
    printf("*** Start of Tokenizing Sentences Demo ***\n");

    // Declare an array to store input sentences and a pointer to the next sentence
    char sentences[BUFFER_SIZE];
    char* nextSentence = NULL;

    // Counter for the sentences
    int sentencesCounter;

    // Main loop for tokenizing sentences
    do {
        // Prompt the user to type sentences (q to quit)
        printf("Type a few sentences separated by dot (q - to quit):\n");

        // Read input sentences from the user
        fgets(sentences, BUFFER_SIZE, stdin);

        // Remove the newline character at the end
        sentences[strlen(sentences) - 1] = '\0';

        // Check if the user wants to quit
        if (strcmp(sentences, "q") != 0) {
            // Tokenize the input sentences using dot as the delimiter
            nextSentence = strtok(sentences, ".");
            sentencesCounter = 1;

            // Loop through the tokens and print each sentence
            while (nextSentence) {
                printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence);
                nextSentence = strtok(NULL, ".");
            }
        }
    } while (strcmp(sentences, "q") != 0);

    // Print a message indicating the end of the tokenizing demo
    printf("*** End of Tokenizing Sentences Demo ***\n\n");
}
