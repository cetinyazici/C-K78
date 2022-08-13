#include <stdio.h>
//RECURSÝVE- Girilen sayýya kadar doðal Sayýlarýn Toplamý
int toplam(int n)
{
	if(n!=0)
	{
		return n+toplam(n-1);
	}
	
	else
	{
		return n;
	}
}

int main()
{
	int sayi, result=0;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	result=toplam(sayi);
	
	printf("Girilen sayiya kadar dogal sayilarin toplami: %d",result);
		
	return 0;
}
