//a program that takes an int at the command line and uses it to convert plaintext to ciphertext

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    string s = get_string("Plaintext: ");
    printf("%s\n", argv[1]);
    
    //iterate over each character of the plaintext using strlen
    for (int i = 0; i < strlen(s); i++)
    {
        int c = (int) s[i];
        c = c + atoi(argv[1]);
        printf("%c", c);
        //if it is an uppercase,rotate it as an upper
        
        //if it is lower, rotate as a lowercase
        
        //if it is neither, print the character as it is
        
        //print a new line
       
    }
   printf("\n");
}



