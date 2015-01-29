/*
 * Name: Ryan Peters
 *
 * FileName: arrays.c
 * 
 * Date: 9/29/2014 18:27
 */

#include <stdio.h>

int main()
{
    // DECLARATIONS
    int numberArray [10] = {3, 9, 1, 2, 10, 19, 13, 8, 6, 11};
    int mirrorArray [10] =  {3, 9, 1, 12, 10, 19, 13, 8, 6, 11};
    int sum = 0;
    int max = numberArray[0];
    
    // FIND SUM OF ODD INDEX VALUES
    for(int i = 0; i < 10; i++)
    {
        if(i % 2 == 1)
        {
            sum = sum + numberArray[i];
        }
    }
    printf("\n==== QUESTION #1 ====\n\n");
    printf("Sum of odd indices: %d\n", sum);
    
    // FIND MAX VALUE OF THE ARRAY
    for(int i = 0; i < 10; i++)
    {
        if(numberArray[i] > max)
        {
            max = numberArray[i];
        }
    }
    
    printf("\n==== QUESTION #2 ====\n\n");
    printf("Max Number in Array is: %d\n", max);
    
    // IN REVERSE PRINT ODD VALUES IN ARRAY & PRINT INDEX
    printf("\n==== QUESTION #3 ====\n\n");
    for(int i = 9; i >= 0; i--)
    {
        int x = numberArray[i];
        
        if(x % 2 == 1)
        {
            printf("Index: %d\t", i);
            printf("Value: %d\n", x);
        }
    }
    
    // DO A DIFF OF BOTH ARRAYS AND IF NOT EQUAL EXIT LOOP
    printf("\n==== QUESTION #4 ====\n\n");
    for(int i = 0; i < 10; i++)
    {
        if(numberArray[i] != mirrorArray[i])
        {
            printf("Index #");
            printf(" %d", i);
            printf(" was NOT the same...exiting\n\n");
            break;
        }
        printf("Index #");
        printf(" %d", i);
        printf(" was the same!\n");
    }
}
