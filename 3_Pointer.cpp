#include <stdio.h>
#include <stdlib.h>
int main(){

    int i,n;
	int temp=0;
    int ptr;
    printf("Elamanlrý giriniz:");
    scanf("%d",&n);
    
    ptr=(int*)calloc(n,sizeof(int));
    
	for (int i=0;i<n;i++) 
	{
        scanf("%d",&ptr[i]);
        
		if(ptr[i]>temp)
		{
            temp = ptr[i];
        }

    }
    printf("\nEn büyük: %d",temp);
    free(ptr);




}
