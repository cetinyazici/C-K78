#include <stdio.h>

struct ogrenci
{
	char isim[15];
	char soyisim[15];
	
	int yas;
	int numarasi;
};

int main()
{
	struct ogrenci ogrenci1={"cetin","yazici",21,1234};
	
	printf("%s\n%s\n%d\n%d\n",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.yas,ogrenci1.numarasi);
	
	return 0;
}
