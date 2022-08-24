#include <stdio.h>
#include <string.h>

struct student
{
	int number;
	char name[40];
	char surname[40];
	int vize;
};

int main()
{
	struct student student1;
	student1.number=123;
	strcpy(student1.name,"cetin");
	strcpy(student1.surname,"yazici");
	student1.vize=45;
	
	struct student student2;
	student2.number=129;
	strcpy(student2.name,"Huseyin");
	strcpy(student2.surname,"Kurt");
	student2.vize=50;
	
	struct student student3;
	student3.number=883;
	strcpy(student3.name,"mert");
	strcpy(student3.surname,"gergin");
	student3.vize=45;
	
	struct student student4;
	student4.number;
	strcpy(student4.name,"ali");
	strcpy(student4.surname,"gözel");
	student4.vize=99;
		
	printf("%d %s %s %d\n\n",student1.number,student1.name,student1.surname,student1.vize);
	printf("%d %s %s %d\n\n",student2.number,student2.name,student2.surname,student2.vize);
	printf("%d %s %s %d\n\n",student3.number,student3.name,student3.surname,student3.vize);
	printf("%d %s %s %d\n\n",student4.number,student4.name,student4.surname,student4.vize);
	
	struct student studentt;
	studentt.number;
	studentt.name[20];
	studentt.surname[15];
	studentt.vize;
	
	for(int i=0; i<3; i++)
	{
		printf("%d. ogrencinin bilgilerini giriniz: \n",i+1);
		scanf("%d %s %s %d",&studentt.number,studentt.name,studentt.surname,&studentt.vize);
	}
	
		for(int i=0; i<3; i++)
	{
		printf("\n%d \n%s \n%s \n%d\n",studentt.number,studentt.name,studentt.surname,studentt.vize);	
	}
	

	return 0;
}
