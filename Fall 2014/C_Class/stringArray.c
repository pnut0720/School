#include <stdio.h>

#include <string.h>

int main ( )
{
    int count = 0;
    int i = 0;
    char name [10] = "Ryan";
    
    printf("My Name is %s\n", name);
    
    while(name[i] != '\0')
    {
        i++;
        count++;
    }
    
    printf("Count: %d\n", count);
    printf("i: %d\n", i);
}