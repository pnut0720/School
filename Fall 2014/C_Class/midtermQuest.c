#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    printf("MIDTERM EXAM\n");
    printf("\nRyan Peters\n");
    printf("\nPART A\n");
    
    {
        printf("\nQuestion 1\n");
        
        // float input[100][100];
        
        printf("Answer: 100 x 100 or 100^2 equals 10,000\n");
        
    }
    
    { // QUESTION #2
        printf("\nQuestion 2\n");
        
        char input[] = "Hello";
        
        int i = 0;
        
        for(i = 0; input[i] != '\0'; i++);
        
        printf("Answer: Size is: %d\n", i);
    }
    
    { // QUESTION #3
        printf("\nQuestion 3\n");
        
        int num[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int sum = 0;
        
        for(int i = 0; i < 10; i++)
        {
            if(num[i] % 5 == 0)
            {
                sum = sum + num[i];
            }
        }
        
        printf("Answer: Sum of Array is: %d\n", sum);
    }
    
    { // QUESTION #4
        
        printf("\nQuestion 4\n");
        
        if(100 > 3 && 'a' > 'c')
        {
            printf("A is TRUE\n");
        }
        else if(100 > 3 ||  'a' > 'c')
        {
            printf("B is TRUE\n");
        }
        else if(! ( 10 <  3 ))
        {
            printf("C is TRUE\n");
        }
        
        printf("D COULD be true depending on what you declare x as\n");
    }
    
    { // QUESTION #5
        
        printf("\nQuestion 5\n");
        
        int answer = 0;
        int x, y;
        x = 10;
        y = 15;
        
        printf("ASSUMING: x equals: %d", x);
        printf(" y equals: %d\n", y);
        
        answer = 3 > 2;
        
        printf("Part A: %d\n", answer);
        
        answer = x > y ||  x <= y;
        
        printf("Part B: %d\n", answer);
        
        answer = x = 6 + ( 6 > 2 );
        
        printf("Part C: %d\n", answer);
        
        printf("Part D is not working second expression not compiling\n");
        
    }
    
    { // QUESTION #6
        
        /*
         Problem #1: Semi-colon needed after char name
         
         Problem #3: When scanf with values you need a & in front of the variable
         
         Problem #4: Same problem as above need a & in front of the variable
         
         Problem #5: Since name is a char you need to change it from %d to %s
         
         */
        printf("\nQuestion 6\n");
        printf("Answer is in comments in block of code\n");
    }
    
    { // QUESTION #7
        
        /*
         Problem #1: int main() should remove the s at the end of main
         
         Problem #2: in the printf should be %c instead of %s
         
         */
        printf("\nQuestion 7\n");
        printf("Answer is in the comments in the block of code\n");
        
    }
    
    { // QUESTION #8
        printf("\nQuestion 8\n");
        
        char name [ 20 ] = "Sierra College";
        
        printf("Answer: %s\n", name);
        printf("Removed the for loop since it's not needed just use percent s (answer also in comments)\n");
        
        /*
         
         IF YOU WANT THE LOOP
         
         for(int i = 0; i <= 1; i++)
         {
            printf("%s\n", name[i];
         }
         
         */
    }
    
    { // QUESTION #9
        
        printf("\nQuestion 9\n");
        int age = 10 ;
        
        switch (age) {
                
            case 10 :
                
                printf ("It is ten \n ") ;
                
            case 20 :
                
                printf ("It is ten \n ") ;
                
            default :
                printf ( "It is neither 10 nor 20 \n");
                break;
        }
        
        printf("To fix this...put break statements in and change second print statement to twenty\n");
    }
    
    { // QUESTION #10
        
        printf("\nQuestion 10\n");
        
        printf("Answer: \n1: isalnum\n2: islower\n3: perror\n4: memcmp\n");
        
    }
    
    { // QUESTION #11
        
        printf("\nQuestion 11\n");
        
        float k = 0.0;
        
        k = 30.0 / 4.0 * 5.0 ;
        
        printf("A: %f\n", k);
        
        k = 30.0 / ( 4.0  *  5.0 ) ;
        
        printf("B: %f\n", k);
        
        k = 30 / 4 *  5 ;
        
        printf("C: %f\n", k);
        
        k = 30 * 5 / 4;
        
        printf("D: %f\n", k);
    }
    
    { // QUESTION #12
        
        printf("\nQuestion 12\n");
        
        int x, y;
        
        x =   ( 3 + 3) * 6 ;
        
        printf("A: %d\n", x);
        
        x = (12 + 7 ) / 2* 3 ;
        
        printf("B: %d\n", x);
        
        y = 3 + 2 * ( x = 7 / 2 ) ;
        
        printf("C: %d\n", y);
        
    }
    
    { // QUESTION #13
        
        printf("\nQuestion 13\n");
        int x = 1;
        for ( int i = 0 ; i < 10 ; i++ )
            x = x * i ;
        
        printf("Answer: Value of x: %d\n", x);
    }
    
    { // QUESTION #14
        
        printf("\nQuestion 14\n");
        int x = 10;
        
        if ( x > 20 || x == 0 )
            printf ("Test Success\n");
        else
            printf ("Test Failed\n");
    }
    
    { // QUESTION #15
        
        printf("\nQuestion 15\n");
        printf("Answer is in the comments in the block of code\n");
        /*
         
         The break leaves a loop and a continue jumps to the next iteration.
         
         A while loop happens only if the argument is true and a do while goes t	hrough no matter what the argument is once and then will go through it again if 	the argument is true.
         
         */
    }
    
    printf("\nPART B\n"); // PART B
    
    { // QUESTION #16
        
        printf("\nQuestion 16\n");
        
        char str[20] = "Sierra College";
        
        char c = 'l';
        
        int count = 0;
        
        unsigned long int length = strlen(str);
        
        for(int i = 0; i < length; i++)
        {
            if(c == str[i])
            {
                count++;
            }
        }
        
        printf("%c ", c);
        printf("happened ");
        printf("%d ", count);
        printf("times.\n");
        
    }
    
    { // QUESTION #17
        printf("\nQuestion 17\n");
        
        char str [20] = "Sierra Mera";
        
        char c = 'r';
        
        int index;
        
        unsigned long int length = strlen(str);
        
        for(int i = 0; i < length; i++)
        {
            if(c == str[i])
            {
                index = i;
            }
        }
        
        printf("Last iteration of ");
        printf("%c ", c);
        printf("happened ");
        printf("at index %d\n", index);
        
    }
    
    { // QUESTION #18
        
        printf("\nQuestion 18\n");
        
        char input[] = "sier9ra980&6College";
        int length;
        
        for(length = 0; input[length] != '\0'; length++);
        
        for(int i = 0; i < length; i++)
        {
            if(isalpha(input[i]))
            {
                
            }
            else if(isdigit(input[i]))
            {
                input[i] = ' ';
            }
            else
            {
                input[i] = ' ';
            }
        }
        
        printf("%s\n", input);
    }
    
    { // QUESTION #19
        
        printf("\nQuestion 19\n");
        
        char input[] = "sierra980&%6College";
        int length;
        int count = 0;
        
        for(length = 0; input[length] != '\0'; length++);
        
        for(int i = 0; i < length; i++)
        {
            
            if(isalpha(input[i]))
            {
                
            }
            else if(isdigit(input[i]))
            {
                count++;
            }
            else
            {
                count++;
            }
        }
        
        printf("%d non alpha characters in the string\n", count);
        
    }
    
    { // QUESTION #20
        
        printf("\nQuestion 20\n");
        
        int num[] = { 21, 28, 32, 38, 37, 52, 59, 69, 81, 98 };
        
        for(int i = 0; i < 10; i++)
        {
            if(num[i] > num[i + 1])
            {
                printf("%d ", num[i + 1]);
                printf("was the error at index ");
                printf("%d\n", i + 1);
                break;
            }
        }
    }
    
    { // QUESTION #21
        
        char input[] = "ABCDEFGHIJKLMNOPQRSTUV";
        int length;
        int i = 0;
        
        for(length = 0; input[length] != '\0'; length++);
        
        while(input[i] == isalpha(input[i]))
        {
            while(input[i] != '\0')
            {
                printf("%d ", i);
                i++;
            }
        }
    }
    
    { // QUESTION #22
        
        printf("\nQuestion 22\n");
        
        long int ndays, year, week;
        const int DAYS_IN_WEEK = 7;
        
        int days;
        
        printf("Please enter number of days: ");
        scanf("%d", &days);
        
        year = days / 365;
                
        week = (days % 365) / DAYS_IN_WEEK;
                
        ndays = (days % 365) % DAYS_IN_WEEK;
                
        printf("%d is equivalent to %ld weeks and %ld days\n", days, week, ndays);
        
    }
    
    { // QUESTION #23
        
        printf("\nQuestion 23\n");
        
        int i;
        int inputArray[500];
        
        while(i < 400)
        {
            srand(time(0));
            int num = rand() % 10;
            inputArray[num]++;
            i++;
        }
        
        for(int i = 0; i < 400; i++)
        {
            printf("%d ", inputArray[i]);
        }
        
    }
    
    { // QUESTION #24
        
        printf("\n\nQuestion 24\n");
        printf("Answer in comments in block of code...can't divide by 0\n");
        /*
        int scores = 500;
        int num = 0;
        int avg;
        avg = scores / num;
        */
    }
    
    { // QUESTION #25
        
        printf("\nQuestion 25\n");
        
        char  src [15] = "Sierra Mtns";
        char  dest [15];
        
        strcpy (dest, src);
        
        /*
         
         Answer: The destination array needs to be at least the same size as the original array or the copy won't work for the program.
         
         */
        
        printf("Answer is in the block of code via comments\n");
    }
    
}
