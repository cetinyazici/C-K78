#include <stdio.h>
#include <stdlib.h>

struct ogrenci
{
	int no;
	char adi[20];
	int vize;
	int final;
	struct ogrenci *sonraki;
};

typedef struct ogrenci dugum;
dugum *head, *yeniDugum, *oncekiDugum, *enBasarili;

void ogrenciListeleOlustur()
{
	int n, k;
	
	printf("Kac elemanli liste olusturacaksýn: ");
	scanf("%d",&n);
	
	for(k==0; k<n; k++)
	{
		if(k==0)
		{
			yeniDugum=(dugum*)malloc(sizeof(dugum));
			head=yeniDugum;
		}
		else
		{
			yeniDugum->sonraki=(dugum*)malloc(sizeof(dugum));
			yeniDugum=yeniDugum->sonraki;
		}
		printf("ogrenci no: ");
		scanf("%d",&yeniDugum->no);
		printf("ogrenci adi: ");
		scanf("%s",yeniDugum->adi);
		printf("vize notu: ");
		scanf("%d",&yeniDugum->vize);
		printf("final notu: ");
		scanf("%d",&yeniDugum->final);
	}
	yeniDugum->sonraki=NULL;
}

void ogrenciListele()
{
	double donemNotu=0;
	dugum *p;
	p=head;
	
	while(p!=NULL)
	{
		printf("\n*****************\n");
		printf("ogrenci no: %d\t",p->no);
		printf("ogrenci adi: %s\t",p->adi);
		printf("vize: %d\t",p->vize);
		printf("final: %d\t",p->final);
		donemNotu=p->vize*0.4 + p->final*0.6;
		printf("donem notu: %2f\t",donemNotu);
		printf("\n*****************\n");
		p=p->sonraki;
	}
}

void ogrenciEkle()
{
	int kayitNo;
	dugum *p, *q, *yeni;
	
	yeniDugum=(dugum*)malloc(sizeof(dugum));
	printf("ogrenci no: ");
	scanf("%d",&yeniDugum->no);
	printf("ogrenci adi: ");
	scanf("%s",yeniDugum->adi);
	printf("vize: ");
	scanf("%d",&yeniDugum->vize);
	printf("final: ");
	scanf("%d",&yeniDugum->final);
	
	printf("Hangi kayittan öncesine eklemek istersiniz: ");
	printf("Listenin sonuna eklmek icin 0 giriniz: ");
	scanf("%d",&kayitNo);
	
	p=head;
	if(p->no==kayitNo) //baþa ekle.
	{
		yeniDugum->sonraki=p;
		head=yeniDugum;
	}
	else
	{
		while(p->sonraki!=NULL)
		{
			q=p;
			p=p->sonraki;
			if(p->no==kayitNo) break;
		}
		if(p->no==kayitNo) //araya ekleme.
		{
			q->sonraki=yeni;
			yeni->sonraki=p;
		}
		else if(p->sonraki==NULL)
		{
			p->sonraki=yeni;
			yeni->sonraki=NULL;
		}
	}
}

int main()
{
	int secim=0;
	printf("1-Liste olustur\n2-Yeni kayýt ekleme\n3-Kayit sil\n4-En büyük basarý notu\n5-Sinif ortalamasý");
	scanf("%d",&secim);
	
	switch(secim)
	{
		case 1:
			ogrenciListeleOlustur();
			//ogrenciListele();
			break;
		case 2:
			ogrenciEkle();
			ogrenciListele();
			break;
		case 3:
			//ogrenciSil();
			ogrenciListele();
			break;
		case 4:
			//enBasariliOgrenci();
			break;
		case 5:
			//sinifBasariOrtalamasi();
			break;		
	}
	return 0;
}
