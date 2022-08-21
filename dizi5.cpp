#include <stdio.h>
//n tane eleman alýr ve en büyüðünü bulur.
int main()
{
    int i, n;
    float arr[100], temp;

    printf("Toplam eleman sayýsýný girin (1 to 100): ");
    scanf("%d", &n);
    printf("\n");

    
    for(i = 0; i < n; i++)
    {
       printf("Sayý Girin %d: ", i+1);
       scanf("%f", &arr[i]);
    }

   
    for(i = 1; i < n; ++i)
    {
// En küçük elemaný bulmak istiyorsanýz < ve > iþaretlerini deðiþtirin
       if(arr[0] < arr[i]) 
       {
           temp = arr[0];
           arr[0] = arr[i];
           arr[i] = temp;
       }
          
    }
    printf("En büyük eleman = %.2f", arr[0]);

    return 0;
}
