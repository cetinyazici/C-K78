#include <stdio.h>

int main()
{
	int dizi[]={1,2,3,4,5,6,7};
	int toplam=0;
	
	for(int i=0; i<7; i++)
	{
		printf("%d\n",dizi[i]);
		toplam+=dizi[i];
			
	}
	printf("Toplam: %d",toplam);
	
	
	return 0;
}
