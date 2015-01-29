/*
 * Name: Ryan Peters
 *
 * File Name: time.c
 *
 * Date: 9/24/2014 21:20
 */

#include <stdio.h>
#include <time.h>

int main()
{
    // DECLARATIONS
    const int SECONDS_PER_YEAR = 31536000;
    const int SECONDS_PER_MONTH = 2628288;
    const int SECONDS_PER_DAY = 86400;
    const int SECONDS_PER_HOUR = 3600;
    const int SECONDS_PER_MINUTE = 60;
    time_t secondsUnknown = time(NULL);
    
    // Calculate Years
    long int years = secondsUnknown / SECONDS_PER_YEAR;
    secondsUnknown = secondsUnknown % SECONDS_PER_YEAR;
    
    // Calculate months
    long int months = secondsUnknown / SECONDS_PER_MONTH;
    secondsUnknown = secondsUnknown % SECONDS_PER_MONTH;
    
    // Calculate Days
    long int days = secondsUnknown / SECONDS_PER_DAY;
    secondsUnknown = secondsUnknown % SECONDS_PER_DAY;
    
    // Calculate Hours
    long int hours = secondsUnknown / SECONDS_PER_HOUR;
    secondsUnknown = secondsUnknown % SECONDS_PER_HOUR;
    
    // Calculate Minutes
    long int minutes = secondsUnknown / SECONDS_PER_MINUTE;
    secondsUnknown = secondsUnknown % SECONDS_PER_MINUTE;
    
    // PRINT ANSWER FOR USER (FINALLY!)
    printf("\nTHE NUMBER OF TIME SINCE JANUARY 1ST 1970\n");
    printf("=========================================\n\n");
    
    printf("Number of Years: %ld\n", years);
    printf("Number of Months: %ld\n", months);
    printf("Number of Days: %ld\n", days);
    printf("Number of Hours: %ld\n", hours);
    printf("Number of Minutes: %ld\n", minutes);
}