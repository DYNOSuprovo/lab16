#include <stdio.h>
#include <string.h>
struct Books{
	char title[50];
	int pages;
	int price;
	char name[50];
};
int main()
{
	int i;
	struct Books b[3];
	for(i=0;i<3;i++)
	{
		scanf(" %[^\n]s",b[i].title);
		
	}
	for(i=0;i<3;i++)
	{
		printf("%s ",b[i].title);
		
	}
	
}

