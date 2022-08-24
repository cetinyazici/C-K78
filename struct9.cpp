#include <stdio.h>
#include <string.h>
struct insanlar
{
	char isim[10];
	char soyisim[10];
	int numara;	
};
int main()
{
	struct insanlar insan1;
	strcpy(insan1.isim,"cetin");
	strcpy(insan1.soyisim,"Yazic");
	insan1.numara=505;
	
	printf("%s %s %d",insan1.isim,insan1.soyisim,insan1.numara);
	
	return 0;
}
