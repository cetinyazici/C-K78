#include <stdio.h>
void hataKodu(int hata,int hata2)
{
	printf("%d %d",hata,hata2);

}

int main()
{
	int sayi;
	printf("Lutfen negatif olmayan bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi<0)
	{
		hataKodu(404,454);
	}
	else
	{
		printf("Tebrikler");
	}
	
	return 0;
}
