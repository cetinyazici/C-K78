#include <stdio.h>
#include <string.h>

int benimstrlen(char *ptr)
{
  int uzunluk=0;
  int i;

  for(i=0;ptr[i]!='\0';i++)
    {
      uzunluk++;
    }

  return uzunluk;
}

int main()
{
  char yazi[5]="tura";
  char *ptr=yazi;

  printf("%s\n",ptr);

  printf("%d",benimstrlen(yazi));

  return 0;
}
