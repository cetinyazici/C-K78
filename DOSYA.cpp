#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct insan {
    char Ad[16];
    char bolum[11];
    int no;
}A;

void arama(FILE *fp)
{
    char x[10];
    printf("hangi isim:");
    scanf("%s",x);
    fp = fopen("yaz.txt","r");
    if(fp==NULL)
	{
        printf("Bos Dosya");
    }
    while(!feof(fp))
	{
        fscanf(fp,"%s %s %d",A.Ad,A.bolum,&A.no);
        if(strcmp(x,A.Ad)==0)
		{
            printf("%s %s %d\n",A.Ad,A.bolum,A.no);
        }
    }
    rewind(fp);
    fclose(fp);
}
void tekrarolusturma(FILE *fp)
{
    fp = fopen("yaz.txt","w");
    fclose(fp);
}
void kayitekleme(FILE *fp)
{
    fp = fopen("yaz.txt","a");
    if(fp==NULL)
	{
        printf("dosya bos");
    }
    else
	{
        printf("lutfen girilecek verileri giriniz:");
        scanf("%s %s %d",A.Ad,A.bolum,&A.no);
        fprintf(fp,"%s %s %d",A.Ad,A.bolum,A.no);
    }
    fclose(fp);
}
void listele(FILE *fp)
{
        fp = fopen("yaz.txt","r");
        if (fp == NULL) 
		{
            printf("Dosya bos");
        }
        else 
		{
            while (!feof(fp))
			{
                fscanf(fp, "%s %s %d ", A.Ad, A.bolum, &A.no);
                printf("%s %s %d \n", A.Ad, A.bolum, A.no);
        	}
        }
        fclose(fp);
}
int main() 
{
    FILE *fp;
    int kisisayisi;
    int secim;
    fp = fopen("yaz.txt","w");
    printf("kac kisilik dosya:");
    scanf("%d",&kisisayisi);
    for (int i = 0; i < kisisayisi; i++)
	{
        printf("Lutfen bilgileri sirasiyla giriniz:");
        scanf("%s %s %d",A.Ad,A.bolum,&A.no);
        fprintf(fp,"%s %s %d\n",A.Ad,A.bolum,A.no);
    }
    fclose(fp);

    while (1) 
	{
        printf("\nhangi islemi yapmak istiyorsunuz: \n"
                      "\n1= Tekrar olusturma - (icerigi silip bos dosya): \n "
                      "\n2= Kayit ekleme: \n"
                      "\n3= Arama: \n"
                      "\n4= Listele:\n"
                      "5= Kapat");
        scanf("%d",&secim);
        switch (secim) {
            case 1:
                tekrarolusturma(fp);
                break;
            case 2:
                kayitekleme(fp);
                break;
            case 3:
                arama(fp);
                break;
            case 4:
                listele(fp);
                break;
            case 5:
                exit(0);
        }
    }
}
