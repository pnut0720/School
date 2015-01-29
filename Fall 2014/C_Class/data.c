#include <stdio.h>
int main ( )
{

int x=0, y=0, z=0;

float fValue=0;
char ch;

printf("Please enter two integers for x and y: \n");
z = scanf ("%d %d", &x, &y );
printf ("number of int items read %d\n", z );
printf ("x = %d y = %d\n", x,y );

printf("Please enter a float and character: \n");
z = scanf ("%f", &fValue );
printf ("number of float items read %d\n", z );
printf ("fValue = %f \n", fValue );

z = scanf ("%c", &ch );
printf ("number of char items read %d\n", z );
printf ("ch = %c \n", ch );

}