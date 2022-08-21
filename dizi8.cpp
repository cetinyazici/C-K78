#include <stdio.h>

int tekCift(int a[], int n)
{
	int tek, cift;
	for(int i=0; i<n; i++)
	{
		if(a[i]%2==0)
		{
			printf("%2d",a[i]);	
		}
	}
	
	printf("\n");
	
	for(int i=0; i<n; i++)
	{
		if(a[i]%2==1)
		{
			printf("%2d",a[i]);
		}
	}
	
	
}

int main()
{
	int number, dizi[8], elemanlar;
	
	printf("Student number: ");
	scanf("%d",&number);
	
	for(int i=0; i<8; i++)
	{
		dizi[i]=i+1;
	}
	
	tekCift(dizi,8);
	 
	return 0;
}
