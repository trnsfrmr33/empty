#include <string.h>
#include <stdio.h>

int largest(int a[], int a_size);

int main()
{
   int array[10] = { 2, 3, 45, 87, 23, 98, 23, 324, 2, 40 };
   int array_size = sizeof(array) / sizeof(array[0]);

   printf("largest is: %d\n", largest(array, array_size));
   printf("largest should be: %d\n", 324);
   return 0;
}

int largest(int a[], int a_size)
{
    int n = 0;

    for (int i = 0; i < a_size; i++)
    {

        if (n < a[i])
        {
            n = a[i];
        }
    }
    return n;
}



