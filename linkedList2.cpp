#include <stdio.h>
#include <stdlib.h>

struct ogrenci 
{
	char name[15];
	char surname[15];
	int number;
	struct ogrenci *next;	
};

typedef struct ogrenci dugum;
dugum *head, *yeniDugum, *oncekiDugum;

void listeOlustur()
{
	int n;
	printf("Kac ogrenci girilecek: ");
	scanf("%d",&n);
	
	for(int i=0; i<n; i++)
	{
		if(i==0)
		{
			yeniDugum=(dugum*)malloc(sizeof(dugum));
			head=yeniDugum;
		}
		else
		{
			yeniDugum->next=(dugum*)malloc(sizeof(dugum));
			yeniDugum=yeniDugum->next;
		}
		printf("ogrenci adi: ");
		scanf("%s",yeniDugum->name);
		printf("ogrenci soyadi: ");
		scanf("%s",yeniDugum->surname);
		printf("ogrenci no: ");
		scanf("%d",&yeniDugum->number);
	}
	printf("%s %s %d",yeniDugum->name,yeniDugum->surname,yeniDugum->number);
	yeniDugum->next=NULL;
	
}

int main()
{
	int secim=0;
	
	printf("Lutfen bir secim yapýnýz...\n");
	printf("1-liste olustur");
	scanf("%d",&secim);
	
	switch(secim)
	{
		case 1:
			listeOlustur();
			break;
	}
	
	return 0;
}
