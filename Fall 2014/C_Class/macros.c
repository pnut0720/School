# include <stdio.h>
# define MAXIMUM 0 
int i;
#ifdef MAXIMUM
int main ( ) {
printf (" Maximum is %d \n", i); 
}
#else 
main ( ) {
printf (" else part of Maximum %d \n", i*2); 
}
#endif
