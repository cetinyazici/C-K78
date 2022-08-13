#include <stdio.h>
int topla(int sayi1, int sayi2)
{
	
	return (sayi1+sayi2);
}

int main()
{
	int sayi1;
	int sayi2;
	
	printf("Lutfen iki sayi giriniz: ");
	scanf("%d %d",&sayi1,&sayi2);
	
	printf("Toplami: %d",topla(sayi1,sayi2));
	
	return 0;
}
