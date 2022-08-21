#include <stdio.h>
#include <string.h>

int main()
{
	char data[10], *ptr;
	ptr=data;
	
	printf("String metnini giriniz: ");
	scanf("%s",data);
	
	printf("%u\n",ptr);
	printf("%c\n",*(ptr+1));
	printf("%u\n",ptr+1);
	printf("%c\n",*ptr+1);
	
	return 0;
}
