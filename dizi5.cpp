#include <stdio.h>
//n tane eleman al�r ve en b�y���n� bulur.
int main()
{
    int i, n;
    float arr[100], temp;

    printf("Toplam eleman say�s�n� girin (1 to 100): ");
    scanf("%d", &n);
    printf("\n");

    
    for(i = 0; i < n; i++)
    {
       printf("Say� Girin %d: ", i+1);
       scanf("%f", &arr[i]);
    }

   
    for(i = 1; i < n; ++i)
    {
// En k���k eleman� bulmak istiyorsan�z < ve > i�aretlerini de�i�tirin
       if(arr[0] < arr[i]) 
       {
           temp = arr[0];
           arr[0] = arr[i];
           arr[i] = temp;
       }
          
    }
    printf("En b�y�k eleman = %.2f", arr[0]);

    return 0;
}
