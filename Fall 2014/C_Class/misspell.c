/*
 * Name: Ryan Peters
 *
 * File_Name: misspell.c
 */

#include <stdio.h>
#include <string.h>

#define NUM_OF_WORDS 8
int main ( )
{
    
    char quit [] = "quit";
    char input [50];
    int ctl = 0;
    int score = 0;
    int i = 0;
    char wrongSpell[NUM_OF_WORDS][20] = {
        "dnokey", // row 0
        "arpicot", // row 1
        "scapegaot", // row 2
        "accumplish" // row 3
    };
    
    char correctSpell[NUM_OF_WORDS][20] = {
        "donkey", // row 0
        "apricot", // row 1
        "scapegoat", // row 2
        "accomplish" // row 3
    };
    
    while(ctl == 0)
    {
        printf("The Wrong Spelling is: %s\n", wrongSpell[i]);
        
        printf("Please enter correct spelling of word or quit: ");
        scanf("%s", input);
        
        ctl = strcmp(input, quit);
        
        if(ctl == 0)
        {
            exit(1);
        }
        else
        {
            int ctl1 = strcmp(input, correctSpell[i]);
            
            if(ctl1 == 0)
            {
                printf("You are Correct! ");
                score++;
                printf("New Score: %d\n", score);
            }
            else
            {
                printf("Sorry your not correct :( ");
                score--;
                printf("New Score: %d\n", score);
            }
        }
        ctl = 0;
        i++;
    }
}
