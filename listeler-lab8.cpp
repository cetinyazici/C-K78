#include <stdio.h>
#include <stdlib.h>
/*
enum day{sunday=1, tuesday, wednestay, thursday, friday, saturday};

int main()
{
	enum day d=thursday;
	printf("%d",d);
	
	return 0;
}
*/
/*
enum State{WORKING=0, FAILED, FREEZE};
enum State currState=FREEZE;
enum State FindState()
{
	return currState;
}

int main()
{
	if(FindState()==WORKING)
	{
		printf("WORKING");
	}
	else
	{
		printf("NOT WORKING");
	}
	
	return 0;
}	
*/
/*
int main()
{

enum result{pass, fail};
enum result s1, s2;
s1=pass;
s2=fail;

printf("%d",s1);
return 0;
}
*/
/*
enum example{a=1, b, c};
enum example example1=b;
enum example answer()
{
	return example1;
}
int main()
{
	(answer()==a)? printf("yes"): printf("no");
	
	return 0;
}
*/
/*
enum sanfoundry{a, b=3, c};

int main()
{
	int MAX=4;
	if(MAX!=c)
		printf("hello");
	
	else
		printf("welcome");
		
	return 0;
}
*/
/*
enum sanfoundry
{
	a, b, c
};
enum sanfoundry g;
int main()
{
	g=g+1;
	printf("%d",g);	
}
*/
/*
enum day
{
	a, b, c=5, d, e
};

int main()
{
	int a;
	printf("a: ");
	scanf("%d",&a);
	
	printf("%d",a);
}
*/
/*
enum x{c=0, d=10, h=20, s=3}a;

int main()
{
	a=c;
	printf(": %d",sizeof(a));
	
	return 0;
}
*/

enum x{a, b, c=5};
int main()
{
	enum x s;
	int b=10;
	printf("%d",b);
}













