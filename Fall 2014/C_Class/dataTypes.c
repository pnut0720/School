#include <stdio.h>

main()
{
    //Unsigned char
    printf("\n");
    unsigned char uch;
    uch = sizeof(unsigned char);
    printf("The size of Unsigned char is: %u \n", uch);
    printf("\n");

    //Integer
    int i;
    i = sizeof(int);
    printf("The size of the integer is: %i \n", i);
    printf("\n");

    //Unsigned short
    unsigned short ush;
    ush = sizeof(unsigned short);
    printf("The size of the unsigned short is: %d \n", ush);
    printf("\n");

    //short
    short sh;
    sh = sizeof(short);
    printf("The size of the short is: %d \n", sh);
    printf("\n");

    //long
    long lng;
    lng = sizeof(long);
    printf("The size of the long is: %ld \n", lng);
    printf("\n");

    //unsigned long
    unsigned long ulng;
    ulng = sizeof(unsigned long);
    printf("The size of the unsigned long is: %lu \n", ulng);
    printf("\n");

    //long long
    long long llng;
    llng = sizeof(long long);
    printf("The size of the long long is: %lld \n", llng);
    printf("\n");

    //float
    float flt;
    flt = sizeof(float);
    printf("The size of the float is: %f \n", flt);
    printf("\n");

    //double
    double dble;
    dble = sizeof(double);
    printf("The size of the double is: %lf \n", dble);
    printf("\n");

    //unsigned int
    unsigned int uint;
    uint = sizeof(unsigned int);
    printf("The size of the unsigned int is: %u \n", uint);
}
