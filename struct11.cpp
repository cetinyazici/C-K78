#include <stdio.h>
#include <string.h>

struct kutuphane 
{
	char baslik[40];
	char yazar[40];
	char konu[40];
	int id;	
};

void printBook(struct kutuphane kitap)
{
	printf("\n\n%s %s %s %d\n",kitap.baslik,kitap.yazar,kitap.konu,kitap.id);
}

int main()
{	
	struct kutuphane kitap1;
	strcpy(kitap1.baslik,"C Programming");
	strcpy(kitap1.yazar,"Nuha Ali");
	strcpy(kitap1.konu,"Degiskenler");
	kitap1.id=787878;
	
	struct kutuphane kitap2;
	strcpy(kitap2.baslik,"C++ Programming");
	strcpy(kitap2.yazar,"Ali Osman");
	strcpy(kitap2.konu,"Veri Tipleri");
	kitap2.id=852741;
	
	printf("%s %s %s %d\n",kitap1.baslik,kitap1.yazar,kitap1.konu,kitap1.id);	
	printf("%s %s %s %d\n",kitap2.baslik,kitap2.yazar,kitap2.konu,kitap2.id);	
	
	printBook(kitap1);	
	printBook(kitap2);
	
	return 0;
}


