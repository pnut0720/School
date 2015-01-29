/*
 * Name: Ryan Peters
 *
 * File Name: coinProc.c
 *
 * Date: Sept. 22nd 2014
 *
 * Time of Day: 17:27 (version #1)
 */

#include <stdio.h>

int main()
{
    // THIS IS THE TEXT EDITOR I USE WHEN CODING CALLED nano

    // Declarations
    int pennies;
    int nickels;
    int dimes;
    int quarters;
    int one_dollars;
    int five_dollar;
    int ten_dollar;
    int twenty_dollar;
    int fifty_dollar;
    int one_hundred_dollar;
    const int ONE_DOLLAR_VALUE = 1;
    const int FIVE_DOLLAR_VALUE = 5;
    const int TEN_DOLLAR_VALUE = 10;
    const int TWENTY_DOLLAR_VALUE = 20;
    const int FIFTY_DOLLAR_VALUE = 50;
    const int ONE_HUNDRED_DOLLAR_VALUE = 100;
    float change_total;
    float bill_total;
    float total_total;
    const float PENNY_VALUE = 0.01;
    const float NICKEL_VALUE = 0.05;
    const float DIME_VALUE = 0.10;
    const float QUARTER_VALUE = 0.25;
    
    // Ask user how many of each (in change)
    printf("How many Pennies do you have? ");
    scanf("%d", &pennies);
    
    printf("How many Nickels do you have? ");
    scanf("%d", &nickels);
    
    printf("How many Dimes do you have? ");
    scanf("%d", &dimes);
    
    printf("How many Quarters do you have? ");
    scanf("%d", &quarters);
    
    // Ask user how many of each (in bills)
    printf("\nBILL TIME:\n\n");
    
    printf("How many Dollars do you have? ");
    scanf("%d", &one_dollars);
    
    printf("How many Five Dollar Bills do you have? ");
    scanf("%d", &five_dollar);
    
    printf("How many Ten Dollar Bills do you have? ");
    scanf("%d", &ten_dollar);
    
    printf("How many Twenty Dollar Bills do you have? ");
    scanf("%d", &twenty_dollar);
    
    printf("How many Fifty Dollar Bills do you have? ");
    scanf("%d", &fifty_dollar);
    
    printf("How many One Hundred Dollar Bills do you have? ");
    scanf("%d", &one_hundred_dollar);
    
    // Calculate for change total
    change_total = (pennies * PENNY_VALUE) + (nickels * NICKEL_VALUE) + (dimes * DIME_VALUE) + (quarters * QUARTER_VALUE);
    
    // Calculate for bill total
    bill_total = (one_dollars * ONE_DOLLAR_VALUE) + (five_dollar * FIVE_DOLLAR_VALUE) + (ten_dollar * TEN_DOLLAR_VALUE) + (twenty_dollar * TWENTY_DOLLAR_VALUE) + (fifty_dollar * FIFTY_DOLLAR_VALUE) + (one_hundred_dollar * ONE_HUNDRED_DOLLAR_VALUE);
    
    // Print the receipt for the totals (change + bills)
    printf("\n=================================\n");
    printf("RECEIPT:\n\n");
    printf("Pennies: %d\t\n", pennies);
    printf("Nickels: %d\t\n", nickels);
    printf("Dimes: %d\t\n", dimes);
    printf("Quarters: %d\t\n", quarters);
    printf("Dollar Bills: %d\t\n", one_dollars);
    printf("Five Dollar Bills: %d\t\n", five_dollar);
    printf("Ten Dollar Bills: %d\t\n", ten_dollar);
    printf("Twenty Dollar Bills: %d\t\n", twenty_dollar);
    printf("Fifty Dollar Bills: %d\t\n", fifty_dollar);
    printf("One Hundred Dollar Bills: %d\t\n", one_hundred_dollar);
    printf("CHANGE TOTAL: \t$%2.2f\n", change_total);
    printf("BILL TOTAL: \t$%2.2f\n\n", bill_total);
    
    // Simple calculation to see how much $ user entered
    total_total = change_total + bill_total;
    
    // Display the total at the end of the rec.
    printf("TOTAL OF EVERYTHING YOU ENTERED: $%2.2f\n", total_total);
    
}
