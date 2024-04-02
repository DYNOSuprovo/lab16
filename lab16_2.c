#include <stdio.h>
struct Emp{
	int id;
	int age;
	float salary;
}emp,e;
int main()
{
	emp.age=22;
	emp.id=1234;
	emp.salary=12000.21;
	printf("Age:=%d\n",e.age);
	printf("Id Number=%d",e.id);
	printf("Salary=%f",e.salary);
}
