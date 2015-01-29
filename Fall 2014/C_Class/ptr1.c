#include <stdio.h>

int return_one(int x)
{
    return x;
}

int main()
{
    int y = 15;
    printf("%d \n", return_one(y));
}
