#include <stdio.h>
//Bu program kullan�c�dan n say�s� al�r (burada n, kullan�c� taraf�ndan belirtilir), 
//dizi veriyi depolar ve bu say�lar�n ortalamas�n� hesaplar.
int main()
{
	int sayi, toplam=0, dizi[10], ortalama;
	
	printf("Kac sayi girilecek: ");
	scanf("%d",&sayi);
	
	for(int i=1;i<=sayi;i++)
	{
		printf("%d. sayi: ",i);
		scanf("%d",&dizi[i]);
		toplam+=dizi[i];
	}
	ortalama=toplam/sayi;
	printf("Toplam: %d\n",toplam);
	printf("Girilen sayiya kadar ortalamasi: %d",ortalama);
	
	return 0;
}
