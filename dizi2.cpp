#include <stdio.h>
//kullan�c�dan be� tane say� al�caz sonra onlar�n ortalamas�n� bulucaz.
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
