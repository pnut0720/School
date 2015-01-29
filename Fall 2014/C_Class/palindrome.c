/*
 * Name: Ryan Peters
 *
 * File_Name: palindrome.c
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char answer1[40];
    char answer2[40];
    char answer3[] = "quit";
    int count = 0;
    int ctl = 0;
    
    while(ctl == 0)
    {
        printf("Please enter a string or press quit: ");
        scanf("%s", answer1);
        
        ctl = strcmp(answer1, answer3);
        
        if(ctl == 0)
        {
            exit(1);
        }
        else
        {
            int length = strlen(answer1);
    
            for(int i = length - 1; i >= 0; i--)
            {
                answer2[count] = answer1[i];
                count++;
            }
    
            if(strcmp(answer1, answer2) == 0)
            {
                printf("Your String is a Palindrome \n");
            }
            else
            {
                printf("Your String is not a Palindrome Sorry \n");
            }
        }
        ctl = 0;
    }
}
