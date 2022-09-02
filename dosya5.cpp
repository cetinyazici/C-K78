#include <stdio.h>

int main()
{
	FILE *dosya;
	char isim[20]="Ayse";
	
	dosya=fopen("deneme.txt","w");
	
	fputs("Merhaba Dünya..",dosya);
	
	fprintf(dosya,"Bu dosya %s nin dosyasýdýr.",isim);
	
	fclose(dosya);
	
	return 0;
}
