#include <stdio.h>
#include <string.h>

union car {
  char name[50];
  int price;
  double percent;
} car;

struct _person {
  char name[13];
  int age;
};

int main(int argc, char *argv [])
{

  // QUESTION #1
  {
    printf("Qestion #1\n");
    
    printf("The number of arguments is %d \n", argc);

    printf("Name of the program is %s \n", argv[0]);

    printf("First argument: %s\n", argv[1]);
    printf("Second argument: %s\n", argv[2]);
    printf("Third argument: %s\n", argv[3]);
  }
 
  // QUESTION #2
  {
    printf("\nQuestion #2\n");

    printf("The size of the union is: %ld \n", sizeof(car));

    /*
      Part of the answer is in union above int main()
    */

  }

  // QUESTION #3
  {

    

  }

  // QUESTION #4
  {
    printf("\nQuestion #4\n");
    int *ptr = (int*)malloc(32);
    *ptr = 0xabcdefba;
    unsigned char *char_ptr = (unsigned char *)ptr;
    printf("%x \n", *char_ptr++);
    printf("%x \n", *char_ptr);

  }

  // QUESTION #5
  {
    printf("\nQuestion #5\n");
    
    printf("A value greater than zero indicates that the first character that do            es not match has a greater value in the first string than in the sec            ond, and a value less than zero indicates the opposite.\n");
  }

  // QUESTION #6
  {
    printf("\nQuestion #6\n");

    struct _person Person_T;

    strcpy(Person_T.name, "Ryan Peters");
    Person_T.age = 36;

    printf("Person_T's name is: %s \n", Person_T.name);
    printf("Person_t's age is: %d \n", Person_T.age);
  }

  // QUESTION #7
  {
    printf("\nQuestion #7\n");

    

  }

  // QUESTION #8
  {
    printf("\nQuestion #8\n");

    char name1[] = "Jessica";
    char name2[] = "Jessica";

    for(int i = 0; i <= 7; i++)
    {
      if(name1[i] != name2[i])
      {
        printf("Strings are not the same\n");
        exit(1);
      }

    }
    printf("The strings are the same!\n");

  }

  // QUESTION #9
  {
    printf("\nQuestion #9\n");

    printf("Five ftp commands: ? (to request help), byte (exit ftp environment), close (to terminate connection with another cpu), get (copy file from remote to local cpu), binary (set the mode of file transfer to binary)\n");

  }

  // QUESTION #10
  {
    printf("\nQuestion #10\n");

    
  }
}
