#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//int shift(char c);

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
        // Stores the length of the the string of index 1 of the argv array aka the cipher
        int length = strlen(argv[1]);

        // check to see if each character in the key is a letter
        for (int i = 0; i < length; i++)
        {
            // If isalpha detects a non-character switches the boolean to false and ends the loop
            if (isalpha(argv[1][i]) == false)
            {
                Verify = false;
                i = length;
                return (1);
            }
        }

        // Converts index 1[i] of argv to an int
        string KEY = (argv[1]);
       
        printf("KEY= %s\n", KEY);

        //converts uppercase and lowercase a-z and A-Z to 0-25
        for (int i = 0; i < strlen(argv[1]); i ++)
        {
        while (argv[1][i] > 96)
        {
            argv[1][i] = argv[1][i] - 32;
        }
        printf("%i,\n", (argv[1][i]) - 65);
        }

        //data check
        printf("KEY is now: %s\n", KEY);

        // if everything works, then print Success (for now)
        if (Verify == true)
        {
            printf("Success\n");
            //int blah = shift(argv[1][0]);
            //printf("%i\n", blah);

             //test data output
             printf("string length: %i\n", length);

            return (0);
        }
        
        //prints out usage reminder if false bool is triggered
        if (Verify == false)
        {
            printf("Usage: ./vigenere keyword\n");
            return (1);
        }
        
        //triggers false bool if argc has more than 2 words
        if (argc > 2)
        {
            Verify = false;
        }
        
    }
}

//int shift(char c)
//{
  //  int c;
    //do
    //{
        //c = get_int("%s", argv[1][i]);
    //}
    //while c > 96)
    //{
        //c = c - 97;
    //}
//}


