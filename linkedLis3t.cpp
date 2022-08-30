#include <stdio.h>
#include <stdlib.h>

struct ogrenci 
{
	int data;
	struct ogrenci *next;
};

typedef struct ogrenci node;
node *start, *temp, *q;

void sonaEkle(int veri)
{
	node *eklenecek=(node*)malloc(sizeof(node));
	eklenecek->data=veri;
	eklenecek->next=NULL;
	
	if(eklenecek==NULL)
	{
		start=eklenecek;
	}
	else
	{
		q=start;
		while(q->next==NULL)
		{
			q=q->next;
		}
		q->next=eklenecek;
	}
}

void yazdir()
{
	q=start;
	while(q->next==NULL)
	{
		printf("%d -> ",q->data);
		q=q->next;
	}
	printf("%d -> ",q->data);
}

int main()
{
	int secim;
	while(1==1)
	{
	printf("Kac eleman girilecek: ");
	scanf("%d",&secim);
	
	sonaEkle(secim);
	yazdir();
	}
	return 0;
}
