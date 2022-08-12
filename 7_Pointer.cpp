#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *dizi;
	int elemanSayisi;
	int i;
	
	printf("Eleman sayisini giriniz: ");
	scanf("%d",&elemanSayisi);
	
	dizi = (int*)malloc(elemanSayisi*sizeof(int));
	
	for(i=0;i<elemanSayisi;i++)
	{
		printf("Adres: %p\nDeger: %d\n\n",&dizi[i],dizi[i]);
	}
	
	free(dizi);	
	return 0;
}
