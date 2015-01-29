#include <stdio.h>

int main()
{
    char string1[100], j;
    char string2[50];
    char stringcpy1[50];
    char stringcpy2[50];
    char stringrev[100];
    int i1 = 0;
    int i2 = 0;
    int i3 = 0;
    int i4 = 0;
    
    printf("Please enter string #1: ");
    scanf("%s", string1);
    
    printf("Please enter string #2: ");
    scanf("%s", string2);
    
    // Find Length of String #1
    printf("\nFIND LENGTH OF STRINGS\n");
    printf("======================\n");
    for(i1 = 0; string1[i1] != '\0'; i1++);
    
    printf("Length of string #1: %d\n", i1);
    
    // Find Length of String #2
    for(i2 = 0; string2[i2] != '\0'; i2++);
    
    printf("Length of string #2: %d\n", i2);

    // Copy String #1
    printf("\nCOPY STRINGS INTO NEW ONES\n");
    printf("==========================\n");
    
    for(int i = 0; i <= i1; i++)
    {
        stringcpy1[i] = string1[i];
    }
    
    printf("String Copy #1: %s\n", stringcpy1);
    
    // Copy String #2
    for(int i = 0; i <= i2; i++)
    {
        stringcpy2[i] = string2[i];
    }
    
    printf("String Copy #2: %s\n", stringcpy2);
    
    // Concatinate the two strings together
    printf("\nCONCATINATE STRINGS TOGETHER\n");
    printf("============================\n");
    
    for(j=0; string2[j]!='\0'; ++j, ++i1)
    {
        string1[i1]=string2[j];
    }
    string1[i1] = '\0';
    
    printf("Strings together into one: %s\n", string1);
    
    for(i1 = 0; stringcpy1[i3] != '\0'; i3++);
    
    // Print String in Reverse
    printf("\nPRINT STRING #1 IN REVERSE\n");
    printf("==========================\n");
    
    for(int i = i3 - 1; i >= 0; i--)
    {
        stringrev[i4] = stringcpy1[i];
        printf("%s", stringrev);
    }
    printf("\n");
    
    
    // Check to see if the Strings are the same or not
    printf("\nSEE IF STRINGS ARE THE SAME\n");
    printf("===========================\n");
    
    for(int i = 0; i <= i3; i++)
    {
        if(stringcpy1[i] != stringcpy2[i])
        {
            printf("Strings are not the same\n");
            exit(1);
        }
    }
    printf("Strings are the same\n");
}
