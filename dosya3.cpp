#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fptr;
	char text[25];
	
	fptr=fopen("yaz.txt","a");
	
	if(fptr==NULL)
	{
		printf("Dosya acilmadi.");
	}
	else
	{
		printf("Bir seyler yaziniz: \n");
		fgets(text,25,stdin);	
		fputs(text,fptr);
		printf("Dosya olusturuldu.");
		fclose(fptr);
	}
	return 0;
}
