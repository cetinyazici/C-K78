#include <stdio.h>
#include <stdlib.h>
//pointer de�erinin de�erini ve adresini yazan program.
int main()
{
	int i=10, *iptr;
	iptr=&i;
	
	printf("iptr nin degeri: %d\n",*iptr);
	printf("iptr nin adres bilgisi: %p\n",iptr);
		
	return 0;
}
