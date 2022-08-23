#include <stdio.h>
struct ogrenci
{
	char isim[10];
	char soyisim[10];
	int number;
};

void goster(struct ogrenci a)
{
	printf("%s %s %d",a.isim,a.soyisim,a.number);
}

int main()
{
	struct ogrenci ogrenci1={"cetin","yazici",105};
	
	goster(ogrenci1);
	
	return 0;
}
