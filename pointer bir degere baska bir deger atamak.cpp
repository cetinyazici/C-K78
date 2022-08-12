#include <stdio.h>
#include <stdlib.h>
//pointer bir degere baska bir deger atamak
int main()
{
	int sayi, *iptr;
	
	printf("sayi giriniz: ");
	scanf("%d",&sayi);
	
	iptr=&sayi;
	printf("Girilen sayi: %d\n",sayi);
	
	*iptr=25;
	printf("Yeni sayi: %d",*iptr);
			
	return 0;
}
