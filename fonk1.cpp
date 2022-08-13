#include <stdio.h>
// ÝKÝ SAYI ARASINDAKÝ ASAL SAYILARI GÖSTERME PROGRAMI
int asalKontrol(int sayi1,int sayi2)
{
	int sayac;
	
	for(int i=sayi1;i<sayi2;i++)
	{ 
		sayac=0;
		
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				sayac++;
			}
		}	
		
		if(sayac==0)
		{
			printf("%d\n",i);	
		}	
	
	}
}

int main()
{
	int sayi1, sayi2;
	
	printf("Lutfen sayi1 giriniz: ");
	scanf("%d",&sayi1);

	printf("Lutfen sayi2 giriniz: ");
	scanf("%d",&sayi2);
	
	asalKontrol(sayi1,sayi2);
		
	return 0;
}
