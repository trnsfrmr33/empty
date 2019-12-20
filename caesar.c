//a program that takes an int at the command line and uses it to convert plaintext to ciphertext

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //if command line isn't two strings
    if (argc != 2 || atoi(argv[1]) == 0)    
    {
        //return with signal of what is needed
        printf("Usage: ./caesar key\n");
        return 1;
    }
   
    //prompt user for their plaintext
    string plain = get_string("Plaintext: ");
   
    //prints the output text and is ready for the next series of letters
    printf("ciphertext: ");
    
    //sets an int to the value of argv[1]
    int key = atoi(argv[1]);
    
    //iterate over each character of the plaintext using strlen
    for (int i = 0; i < strlen(plain); i++)
    {
        //sets the value of c to the ith letter of the string s
        int c = (int) plain[i];
        
        //rotate the letters by argv[1] positions 
        c = c + atoi(argv[1]);
        
        if (isupper(plain[i]))
        {
            printf("%c", (plain[i] - 'A' + key) % 26 + 'A');
        }
        
        else if (islower(plain[i]))
        {
            printf("%c", (plain[i] - 'a' + key) % 26 + 'a');
        }
        else
        {
            printf("%c", plain[i]);    
        }      
    }    
    //end of program, prints new line
    printf("\n"); 
}
    
    
    

