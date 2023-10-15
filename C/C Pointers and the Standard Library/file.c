#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *inputFileName = argv[1];
    char *wordToRemove = argv[2];

    // Open the input file for reading
    FILE *inputFile = fopen(inputFileName, "r");

    // Create the output file with "-processed" appended to the input file name
    char *outputFileName = malloc(strlen(inputFileName) + 11); // 11 is the length of "-processed"

    strcpy(outputFileName, inputFileName);
    strcat(outputFileName, "-processed");

    // Open the output file for writing
    FILE *outputFile = fopen(outputFileName, "w");

    char line[1024]; // Assuming a line won't be longer than 1024 characters

    // Read and process each line from the input file
    while (fgets(line, sizeof(line), inputFile)) {
        char *found = strstr(line, wordToRemove);

        if (found) {
            // Remove the word from the line
            memmove(found, found + strlen(wordToRemove), strlen(found + strlen(wordToRemove)) + 1);
        }

        // Write the modified line to the output file
        fputs(line, outputFile);
    }

    // Close both input and output files
    fclose(inputFile);
    fclose(outputFile);

    printf("File %s-processed has been created with the word '%s' removed.\n", inputFileName, wordToRemove);

    free(outputFileName);

    return 0;
}
