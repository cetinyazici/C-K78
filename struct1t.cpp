#include <stdio.h>
struct film
{
	unsigned int yil;
	char *tur;
	unsigned int sure;
	char *isim;	
};



int main()
{
	struct film film1;
	film1.yil=1994;
	film1.tur="Drama";
	film1.sure=142;
	film1.isim="The end.";
	
	printf("%s: \n%4d%4d Dakika %s\n",film1.isim,film1.yil,film1.sure,film1.tur);
	
	printf("\nNe kadar yer kapliyor: %d\n\n",sizeof(film));
	
	struct film film2={1997,"Komedi",152,"The end2"};
	printf("%s: \n%4d%4d Dakika %s\n\n\n",film2.isim,film2.yil,film2.sure,film2.tur);
	
	struct film film3={1998,"Aksiyon"};
	printf("%s: \n%4d%4d Dakika %s\n",film3.isim,film3.yil,film3.sure,film3.tur);
	
	

	
	
	
	return 0;
}
