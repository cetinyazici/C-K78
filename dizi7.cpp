#include <stdio.h>
int main(){
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;

    printf("Sat�r say�s�n� girin (1 ile 100 aras�nda): ");
    scanf("%d", &r);
    printf("S�tun say�s�n� girin (1 ile 100 aras�nda): ");
    scanf("%d", &c);

    printf("\n1. matris elemanlar�n� girin:\n");

    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Eleman girin a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }

    printf("2. matris elemanlar�n� girin:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Eleman girin a%d%d: ",i+1, j+1);
            scanf("%d", &b[i][j]);
        }



    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }

    printf("\n�ki matrisin toplam�: \n\n");

    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {

            printf("%d   ",sum[i][j]);

            if(j==c-1)
            {
                printf("\n\n");
            }
        }
    
    return 0;
}
