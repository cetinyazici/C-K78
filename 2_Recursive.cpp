#include <stdio.h>

int topla(int n)
{	
	if(n==0)
	{
		return 0;
	}
	
	else
	{
		return(n+topla(n-1));
	}
}

int main()
{
	int sayi=10;

	printf("Toplam: %d",topla(sayi));
		
	return 0;
}
