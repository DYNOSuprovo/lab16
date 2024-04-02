#include <stdio.h>
#include <string.h>
struct STD{
	int marks;
	char name[50];
}s1,s2;
int main()
{
	strcpy(s1.name,"Danza");
	strcpy(s2.name,"Kaztro");
	s1.marks=424;
	s2.marks=444;
	if(s1.marks>s2.marks)
		printf("Got more name=%s\n",s1.name);
	else
		printf("Got more name=%s\n",s2.name);}
