#include <stdio.h>
#include <stdlib.h>
#define WIDTH 99
#define HEIGHT 99
#define TOTAL (WIDTH*HEIGHT)

int main ()
{
    FILE *fp, *fw;
    unsigned char iA[WIDTH][HEIGHT];
    unsigned char oA[WIDTH][HEIGHT];
    unsigned char pixel ;
    
    char *header = "P2\n # CREATOR: GIMP PNM Filter Version 1.1\n 99 99\n 255\n";
    
    // STEP 1 OPEN THE FILE TO READ ..DON"T WORRY
    fp = fopen ("input.pgm", "r");
    if (fp == NULL)
    {
        printf("ERROR TO OPEN FiLE FOR READING\n");
        exit(0);
    }
    
    // STEP 2 OPEN THE FILE TO WRITE..DON"T WORRY
    fw = fopen ("copy.pgm", "w");
    if (fw == NULL)
    {
        printf("ERROR IN FiLE OPEN TO WRITE \n");
        exit(0);
    }
    
    
    
    //STEP 3 ...READING THE DATE INTO THE BUFFER
    // DON"T WORRY
    int num = 0, i = 0, j = 0;
    num = fscanf (fp, "%d", &pixel);
    while ( num > 0 ) {
        
        // WE STORE THE PIXEL VALUE IN OUR ARRAY
        // - pixel Array pA
        
        iA[i][j++] = pixel;
        if ( j > WIDTH-1 ) {
            j = 0;
            i++ ;
        }
        
        num = fscanf (fp, "%s", &pixel);
    }
    
    
    
    // THIS IS THE MEAT OF THE PROGRAM YOU HAVE TO WORRY
    // JUST COPY THE INPUT BUFFER TO OUTPUT BUFFER
    // COPY OPERATION...YOU HAVE TO UNDERSTAND HOW
    // THIS COPY WORKS BECAUSE YOU WILL BE DOING IT
    // OTHER OPERATIONS
    for ( i = 0; i < HEIGHT; i++)
        for ( j = 0; j < WIDTH; j++)
            oA[i][j] = iA[i][j];
    
    // LAST STEP IS
    // WRITE THE OUTPUT BUFFER TO THE FILE
    // BEFORE WRITING, WE NEED TO WRITE THE HEADER
    fprintf(fw, "%s ", header);
    // DONE WITH HEADER, DUMP THE IMAGE TO FILE NOW
    for ( i = 0; i < HEIGHT; i++)
        for ( j = 0; j < WIDTH; j++)
            fprintf(fw, "%d ", oA[i][j]);
    
    //CLOSE THE FILES
    fclose (fp);
    fclose (fw);
    
}

