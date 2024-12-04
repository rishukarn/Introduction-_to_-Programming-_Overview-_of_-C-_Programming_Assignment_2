//LAB EXERCISE 3: Word Count
//Write a C program that counts the number of words in a sentence entered by the user. ?
//Challenge: Modify the program to find the longest word in the sentence.


#include <stdio.h>

int main() {
    char sentence[1000], longestWord[100];
    int wordCount = 0, maxLength = 0, currentLength = 0, index = 0;

    // Prompt the user for a sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Initialize variables for finding the longest word
    char currentWord[100];
    currentWord[0] = '\0';  // Start with an empty word
    longestWord[0] = '\0';

    // Iterate through the sentence
    for (int i = 0; sentence[i] != '\0'; i++) {
        char ch = sentence[i];

        // Check if the character is alphanumeric
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            // Add character to the current word
            currentWord[index++] = ch;
            currentLength++;
        } else {
            if (currentLength > 0) {  // End of a word
                wordCount++;
                currentWord[index] = '\0';  // Null-terminate the current word
                
                // Update the longest word if needed
                if (currentLength > maxLength) {
                    maxLength = currentLength;
                    // Copy currentWord to longestWord manually
                    for (int j = 0; j <= currentLength; j++) {
                        longestWord[j] = currentWord[j];
                    }
                }

                // Reset for the next word
                index = 0;
                currentLength = 0;
            }
        }
    }

    // Process the last word if the sentence doesn't end with a space
    if (currentLength > 0) {
        wordCount++;
        currentWord[index] = '\0';  // Null-terminate the current word
        if (currentLength > maxLength) {
            maxLength = currentLength;
            for (int j = 0; j <= currentLength; j++) {
                longestWord[j] = currentWord[j];
            }
        }
    }

    // Output the results
    printf("Word Count: %d\n", wordCount);
    if (maxLength > 0) {
        printf("Longest Word: %s\n", longestWord);
        printf("Length of Longest Word: %d\n", maxLength);
    } else {
        printf("No words found.\n");
    }

    return 0;
}
