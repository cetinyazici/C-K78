#include <stdio.h>
#include <string.h>

int tersCevir(char name[])
{	
	int uzunluk=strlen(name);
	int gecici;
	
	for(int i=0; i<uzunluk/2; i++)
	{
		gecici=name[i];
		name[i]=name[uzunluk-1-i];
		
		name[uzunluk-1-i]=gecici;
	}
}

int main()
{
	char name[10];
	
	printf("isim: ");
	scanf("%s",name);
	
	tersCevir(name);
	
	printf("%s",name)
	
	;
	
	return 0;
}
