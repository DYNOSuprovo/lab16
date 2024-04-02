#include <stdio.h>
#include <string.h>
struct Emp{
	int no;
	char name[50];
	int depart;
}emp,e;
int main()
{
	strcpy(emp.name,"Pokemon");
	emp.no=12536456;
	emp.depart=12000.21;
	e=emp;
	printf("name=%s\n",e.name);
	printf("Id Number=%d",e.no);
	printf("DEPART=%d",e.depart);
}
