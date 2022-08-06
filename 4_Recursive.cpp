#include <stdio.h>

int faktoriyel(int n)
{
	if(n>=1)
	{
		printf("%3d",n);
		return n*faktoriyel(n-1);
	}
	
	else
	{
		return 1;
	}
}

int main()
{
	int number;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&number);
	
	printf("Sonuc: %d\n",faktoriyel(number));
	
	return 0;
}
