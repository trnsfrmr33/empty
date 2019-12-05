#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: "); 
    } 
    while (n < 1 || n > 8); 
    
    //run hash pyramid creator n times
    for (int i = 0; i < n; i++)
    {
        //print spaces before the hashmarks
        //setting interger in expression to false reverses build
        for (int j = 0; j < n - 1 - i; j++)
        {
            //prints spaces
            printf(" ");
        }
        //loop to print hashes 
        for (int j = 0; j < i + 1; j++)
            
        {
            //print hashes 
            printf("#"); 
        }     
        //new line
        printf("  ");
        
        //print spaces before the hashmarks
        //setting interger in expression to false reverses build
        for (int j = 0; false ; j++)
        {
            //prints spaces
            printf(" ");
        }
        //loop to print hashes 
        for (int j = 0; j < i + 1; j++)
            
        {
            //print hashes 
            printf("#"); 
        }     
        //new line
        printf("\n");
    }
   
}


