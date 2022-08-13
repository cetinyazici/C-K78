#include <stdio.h>
//girilen iki sayinin obebini hesaplama.
int obeb(int x, int y) {
    if (y == 0)
        return x;
    else
    	return obeb(y,x%y);
}
 
int main() {
    int sayi1, sayi2, sonuc;
    
    printf("sayi1: ");
    scanf("%d",&sayi1);
    
    printf("sayi2: ");
    scanf("%d",&sayi2);
    
    sonuc = obeb(sayi1, sayi2);
    printf("obeb(%d,%d) = %d\n", sayi1, sayi2, sonuc);
    
	return 0;
}
 

