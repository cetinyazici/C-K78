#include <stdio.h>

int main()
{
	int i;
	int *iptr;
	i=5;
	iptr=&i;
	
	printf("i'nin adresi: %p\n",&i);
	printf("iptr'nin adresi: %p\n",iptr);
	printf("i nin degeri: %d\n",i);
	printf("*iptr nin degeri: %d",*iptr);
	

	return 0;
}
