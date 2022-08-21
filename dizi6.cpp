#include <stdio.h>
#include <math.h>

float standartSapma(float data[])
{
    float toplam = 0.0, ortalama, hesaplama = 0.0;

    int i;

    for(i=0; i<10; i++)
    {
        toplam += data[i];
    }

    ortalama = toplam/10;

    for(i=0; i<10; i++)
        hesaplama += pow(data[i] - ortalama, 2);

    return sqrt(hesaplama/10);
}

int main()
{
    int i;
    float data[10];

    printf("10 eleman giriniz: \n");
    for(i=1; i < 11; i++)
    {
    	printf("%d. eleman: ",i);
        scanf("%f", &data[i]);
	}
    printf("\nStandart Sapmasý = %.6f", standartSapma(data));

    return 0;
}


