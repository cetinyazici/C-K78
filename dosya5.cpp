#include <stdio.h>

int main()
{
	FILE *dosya;
	char isim[20]="Ayse";
	
	dosya=fopen("deneme.txt","w");
	
	fputs("Merhaba D�nya..",dosya);
	
	fprintf(dosya,"Bu dosya %s nin dosyas�d�r.",isim);
	
	fclose(dosya);
	
	return 0;
}
