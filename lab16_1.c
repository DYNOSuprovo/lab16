#include <stdio.h>
struct Emp{
	int id;
	int age;
	float salary;
}emp;
int main()
{
	emp.age=22;
	emp.id=1234;
	emp.salary=12000.21;
	printf("Age:=%d\n",emp.age);
	printf("Id Number=%d",emp.id);
	printf("Salary=%f",emp.salary);
}
