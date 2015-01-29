/*
 * NAME: Ryan Peters
 *
 * FILE_NAME: random.c
 *
 * DATE: 9/26/2014 @ 11:30
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    // DECLARATIONS
    const float DIME_AMT = 0.10;
    const float QUARTER_AMT = 0.25;
    const float DOLLAR_AMT = 1.00;
    float balance = 10.00;
    int play_decision;
    float bet_amount;
    int count = 0;
    
    // START THE PROGRAM START USER WITH $10.00
    printf("\n==== WELCOME TO THE SUPER DUPER SLOT MACHINE ====\n\n");
    printf("Rules of the Game: \n");
    printf("IF YOU GET ONE(1) SEVEN(7) WIN BET AMOUNT\n");
    printf("IF YOU GET TWO(2) SEVENS(7's) WIN 10 TIMES BET AMOUNT\n");
    printf("IF YOU GET THREE(3) SEVENS(7's) WIN 1000 TIMES BET AMOUNT\n");
    printf("\n\nYour Initial Balance Starting Out is: %3.2f\n\n", balance);
    
    // IF BALANCE IS MORE THAN $1 THEN PLAY THE GAME IF NOT END THE GAME
    while(balance >= 1.00)
    {
        // ASK USER IF THEY WANT TO PLAY THE GAME MORE
        printf("\nWould You Like to Play(1) or Quit(0)? ");
        scanf("%d", &play_decision);
        
        // IF THEY DECIDE TO PLAY THEN...
        if(play_decision == 1)
        {
            do
            {
                // ...ENTER THEIR BET AMOUNT (FEELING LUCKY?)
                printf("\nPlace Bet: Either Dime(1), Quarter(2), or Dollar(3) ");
                scanf("%f", &bet_amount);
                
                // IF USER ENTERS WRONG BET AMOUNT HAVE THEM TRY IT AGAIN
                if(bet_amount < 1 || bet_amount > 3)
                {
                    printf("\nWrong Number Please try again. \n");
                }
                else
                {
                    break;
                }
            }
            // ELSE (WHILE) THEY WILL PLAY THE GAME OF CHANCE!
            while(bet_amount > 0 || bet_amount < 4);
            {
                // IF BET AMOUNT IS == 1 THEN ASSOCIATE WITH A DIME
                if(bet_amount == 1)
                {
                    char amountName[4] = "Dime";
                    printf("\nYou Bet A %s\n", amountName);
                    bet_amount = 1 * DIME_AMT;
                }
                // IF BET AMOUNT IS == 2 THEN ASSOCIATE WITH A QUARTER
                else if(bet_amount == 2)
                {
                    char amountName[] = "Quarter";
                    printf("\nYou Bet A %s\n", amountName);
                    bet_amount = 1 * QUARTER_AMT;
                }
                // IF BET AMOUNT IS == 3 THEN ASSOCIATE WITH A DOLLAR
                else if(bet_amount == 3)
                {
                    char amountName[] = "Dollar";
                    printf("\nYou Bet A %s\n", amountName);
                    bet_amount = 1 * DOLLAR_AMT;
                }
                // ROLL THE WHEEL OF CHANCE!
                printf("\nAre You Feeling Lucky?\n\n");
                printf("\n\t=== LET'S ROLL THE WHEEL ===\n");
                
                // RANDOM NUMBER GENERATOR GENERATING THREE NUMBERS
                srand(time(0));
                int x = rand() % 10;
                int y = rand() % 10;
                int z = rand() % 10;
                
                printf("\nWheel is Rolling...\n");
                printf("\n\tR1\tR2\tR3\n");
                printf("\t%d", x);
                printf("\t%d", y);
                printf("\t%d\n", z);
                
                // IF x == 7 THEN ADD ONE TO COUNT AND SO ON
                if(x == 7)
                {
                    count++;
                }
                if(y == 7)
                {
                    count++;
                }
                if(z == 7)
                {
                    count++;
                }
                
                // IF COUNT == 0 (NO 7'S) THEN DECREASE BY BET AMT
                if(count == 0)
                {
                    balance = balance - bet_amount;
                    printf("\n\nRats! No sevens (7's) your new balance is: %3.2f\n", balance);
                }
                // OR IF COUNT == 1 (ONE 7) THEN INCREASE BY BET AMT
                else if(count == 1)
                {
                    balance = balance + bet_amount;
                    printf("\n\nCONGRATS! You Got One seven (7) New Balance: %3.2f\n", balance);
                }
                // OR IF COUNT == 2 (TWO 7'S) MULTIPLY BALANCE BY 10
                else if(count == 2)
                {
                    balance = balance + (bet_amount * 10);
                    printf("\n\nCONGRATS!! You Got TWO sevens (7's) New Balance: %3.2f\n", balance);
                }
                // LUCKY! IF COUNT == 3 (THREE 7'S) MULTIPLY BALANCE BY 1000
                else if(count == 3)
                {
                    balance = balance + (bet_amount * 1000);
                    printf("\n\nBIG WINNER!!! You Got THREE sevens (7's) * 1000!: %3.2f\n", balance);
                }
                // RESET COUNT FOR NEXT WAVE THROUGH WHILE LOOP
                count = 0;
            }
        }
        // IF PLAY == 0 (DON'T WANT TO PLAY ANYMORE) PRINT BALANCE AND EXIT PROG.
        else if(play_decision == 0)
        {
            printf("\nThank You For Playing...Your Remaining Balance is: %3.2f\n\n", balance);
            exit(1);
        }
    }
}