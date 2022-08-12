#include <stdio.h>

int maks(int *a,int uzunluk)
{
  int maks=a[0];
  int i;

  for(i=1;i<uzunluk;i++)
    {
      if(a[i]>maks)
      {
        maks=a[i];
      }
    }

  return maks;
}

int main()
{
  int sayilar[5]={1,100,3,5,455};

  int max=maks(sayilar,5);


  printf("sayilar dizisinin en büyük elemani: %d",max);
  
  

  return 0;
}
