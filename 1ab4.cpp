#include <stdio.h>
#include <stdlib.h>
int main(){

    int i,n;
	int temp=0;
    int ptr;
    printf("Elamanlr� giriniz:");
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
    printf("\nEn b�y�k: %d",temp);
    free(ptr);




}
