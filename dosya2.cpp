#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char veri[25]="Yazilim Yazici";
	int uzunluk=strlen(veri);
	
	FILE *fptr;
	fptr=fopen("Yazilim Yazici.txt","w");
	
	if(fptr==NULL)
	{
		printf("Dosya acilamadi.");
	}
	else
	{
		for(int i=0; i<uzunluk; i++)
		{
			fputc(veri[i],fptr);
			printf("Yazilan karakter: %c\n",veri[i]);
		}
		printf("Dosya basariyla olusturuldu.");
		
			
	}
	fclose(fptr);	
	return 0;
}
