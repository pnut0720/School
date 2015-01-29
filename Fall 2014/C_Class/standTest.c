#include <stdio.h>

int main()
{
    // QUESTION #1
    char input[] = {'+', 5, 2, '-', 8, 3, '*', 9, 4, '/', 10, 2, '+', 16, 24, '-', 18, 6, '+', 20, 4, '-', 18, 2, '*', 9, 3, '/', 100, 2, '+', 100, 120, '+', 82, 18, '*', 9, 9, '*', 3, 3, '*', 13, 2, '-', 8, 8, '*', 3, 2, '/', 80, 2, '+', 3, 4, '*', 10, 3 };
    int responses[20];
    printf("Question #1: ");
    printf("What is 5 + 2: ");
    int question = 1;
    PrompQuestions(input, question);
    scanf("%d", responses);
    
}

void PrompQuestions(char input, int question)
{
    if(question == 1)
    {
        
    }
}
