#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>


int main(int argc, string argv[])
{
    // Stores a boolean to use as an off switch if we dectect a bad input
    bool Verify = true;

    if (argc > 2)
        {
            Verify = false;
            printf("Usage: ./vigenere keyword\n");
            return (1);
        }

    // Counts the number of arguements in the command line
    if (argc == 2)
    {
        // Stores the length of the the string in index 1 of the argv array
        int length = strlen(argv[1]);

        // check to see if each character in the key is a letter
        for (int i = 0; i < length; i++)
        {
            // If isalpha detects a non-character switches the boolean to false and ends the loop
            if (isalpha(argv[1][i]) == false)
            {
                Verify = false;
                i = length;
            }
        }

        // Converts index 1[i] of argv to an int
        for (int i = 0; i < length; i++)
        {
            // Converts index 1[i] of argv to an int
            const string KEY = (argv[1]);
        }
        // If the loop successfully finishes and the isKeyValid bool stays true then we have a              valid key and can proceed
        if (Verify)
        {
            printf("Success\n");
            return (0);
        }
        if (Verify == false)
        {
            printf("Usage: ./vigenere keyword\n");
            return (1);
        }
        if (argc > 2)
        {
            Verify = false;
        }
    }

}
