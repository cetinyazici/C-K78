#include <stdio.h>
#include <string.h>

int main()
{
	int hesapNo;
	char ad[30];
	double bakiye;
	
	FILE *mfptr;
	mfptr=fopen("musteri.dat","w");
	
	if(mfptr==NULL)
	{
		printf("Dosya acilmadi.");
	}	
	else
	{
		printf("hesap no isim ve bakiye girin: \n");
		printf("Veri girisini bitirmek icin EOF gir: ");//ctrl+z
		printf("?");
		scanf("%d %s %lf",&hesapNo,ad,&bakiye);
		
		while(!feof(stdin))
		{
			fprintf(mfptr,"%d %s %.2lf",hesapNo,ad,bakiye);
			printf("?");
			scanf("%d%s%lf",&hesapNo,ad,&bakiye);
		}
		fclose(mfptr);
	}
	
	return 0;
}
