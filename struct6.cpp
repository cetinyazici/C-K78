#include <stdio.h>
#include <string.h>
struct Address
{
	char mahalle[20];
	char cadde[20];
	char sokak[20];	
};

struct ogrenci
{
	char ismi[15];
	char soyisim[15];
	int numara;
	int yas;
	struct Address adres;	
};

int main()
{
	struct ogrenci ogrenci1;	
	strcpy(ogrenci1.ismi,"Cetin");
	strcpy(ogrenci1.soyisim,"Yazici");
	ogrenci1.numara=505;
	ogrenci1.yas=22;
	strcpy(ogrenci1.adres.mahalle,"Terminal");
	strcpy(ogrenci1.adres.cadde,"7. cad.");
	strcpy(ogrenci1.adres.sokak,"100. sok.");
	
	printf("isim: %s\n",ogrenci1.ismi);
	printf("soyisim: %s\n",ogrenci1.soyisim);
	printf("numara: %d\n",ogrenci1.numara);
	printf("yas: %d\n",ogrenci1.yas);
	printf("mahalle: %s\n",ogrenci1.adres.mahalle);
	printf("cadde: %s\n",ogrenci1.adres.cadde);
	printf("sokak: %s\n",ogrenci1.adres.sokak);
	
	
	
	return 0;
}
