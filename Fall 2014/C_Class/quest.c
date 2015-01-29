#include <stdio.h>
#include <string.h>

struct _person
{
  int age;
  char name [32];

};

void print_names_offset(struct _person *pList, int cnt)
{
  int i = 0;

  for(i = 0; i < cnt; i++)
  {
    printf("%s ",  

  }
}

void print_names_arithmetic(struct _person *pList, int cnt)
{
  int i = 0;

  for(i = 0; i < cnt; i++)
  {

  }

}

void print_names_dashAngleOperator(struct _person *pList, int cnt)
{
  int i = 0;

  for(i = 0; i < cnt; i++)
  {


  }

}

int main()
{

  struct _person person;
  struct _person pArray[2];

  pArray[0].age = 10;
  strcpy(pArray[0].name, "John");

  pArray[1].age = 40;
  strcpy(pArray[1].name, "Maggie");

  print_names_offset(pArray, 2);
  print_names_arithmetic(pArray, 2);
  print_names_dashAngleOperator(pArray, 2);

}
