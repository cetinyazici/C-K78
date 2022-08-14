#include <stdio.h>
//kullanýcýdan beþ tane sayý alýcaz sonra onlarýn ortalamasýný bulucaz.
int main()
{
	int dizi[5];
	int toplam=0.0;
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("sayi: ");
		scanf("%d",&dizi[i]);
			
	}
	
	for(i=0; i<6; i++)
	{
		toplam+=dizi[i];
	}
			
	printf("Girilen sayilarin toplami: %d\n",toplam);
	printf("Girilen sayilarin ortalamasi: %d",(toplam/5));

	return 0;
}
