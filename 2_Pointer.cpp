#include <stdio.h>

int main()
{
	int xyz=10, k;
	
	int *p;
	
	p=&xyz;
	
	k=*p;
	
	printf("%d , %d", p, k);
	
	return 0;
}
