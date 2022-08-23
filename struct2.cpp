#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int TAMSAYI;
typedef struct insan INSAN;

enum ay{ocak=1,subat,mart,nisan,mayıs,haziran,temmuz};//0'dan başlar.
//=1 dersen 1den.
																					
struct insan
{
	int yas;
	float boy;
	char *isim;
	int kilo;
	ay dogumAyi;

};

int main()
{
	struct insan insan1;
	
	insan1.isim="Cetin";
	insan1.boy=1.78;
	insan1.kilo=65;
	insan1.yas=21;
	insan1.dogumAyi=3;

	
	printf("insan1'in adi: %s\n",insan1.isim);
	printf("insan1'in boyu: %fl\n",insan1.boy);
	printf("insan1'in kilosu: %d\n",insan1.kilo);
	printf("insan1'in yasi: %d\n",insan1.yas);
	printf("insan1'in dogum ayi: %s\n",insan1.dogumAyi);
	
	printf("İnsan1 structinin boyutu: %d\n",sizeof(insan1));
	
	TAMSAYI sayi1=5;
	printf("sayi1 degeri: %d\n",sayi1);
	
	INSAN insan2;
	insan2.isim="Mert";
	insan2.boy=2.0;
	insan2.kilo=74;
	insan2.yas=23;
	
	
	printf("insan2 adi: %s",insan2.isim);
	

	
	
	return 0;
}
