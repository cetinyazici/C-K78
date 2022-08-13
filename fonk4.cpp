#include <stdio.h>
//Özyinelemeyi Kullanarak Sayýnýn Faktöriyelini Bulmak
int faktoriyal(int n)
{
	if(n!=1)
	{
		return n*faktoriyal(n-1);
	}
	
	else
	{
		return n;
	}
}

int main()
{
	int sayi, result=1;
	
	printf("Lutfen faktoriyalini bulmak istediðinizin sayiyi giriniz: ");
	scanf("%d",&sayi);
	
	result=faktoriyal(sayi);
	printf("Sonuc: %d",result);
	
	return 0;
}
