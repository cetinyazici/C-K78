#include <stdio.h>

void degeriDegistir(int *a, int *b)
{
  int gecici=*a;

  *a=*b;
  
  *b=gecici;
  
}


int main()
{
  int x=5, y=10;
  degeriDegistir(&x,&y);

  printf("x: %d, y: %d",x,y);

  
  return 0;
}
