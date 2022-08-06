#include <stdio.h>
int fibonacci(int n) 
{
    if (n == 0)
        return 0;
    
	else if (n == 1)
        return 1;
    else
    	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    int sayi;
    printf("Bulmak istediginiz indisi giriniz: ");
    scanf("%d",&sayi);
    int sonuc = fibonacci(sayi);
    printf("%d.indisteki sayi: %d\n", sayi, sonuc);
    return 0;
}
