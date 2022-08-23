#include <stdio.h>

struct ogrenci
{
	char isim[7];
	char soyisim[7];
	int numara;
};

int main()
{
	struct ogrenci ogrenciler[3];
	
	for(int i=0; i<3; i++)
	{
		printf("%d ogrencinin bilgilerini giriniz: ",i+1);
		scanf("%s %s %d",&ogrenciler[i].isim,&ogrenciler[i].soyisim,&ogrenciler[i].numara);
	}
	
	for(int i=0; i<3; i++)
	{
		printf("\n%s %s %d\n",ogrenciler[i].isim,ogrenciler[i].soyisim,ogrenciler[i].numara);
	}
	
	return 0;
}
