#include <stdio.h>
#include <string.h>
struct Books{
	char title[50];
	int book_id;
	int isbnno;
	char name[50];
}b1,b2;
int main()
{
	scanf(" %[^\n]s",b1.title);
	scanf(" %[^\n]s",b1.name);
	scanf("%d",&b1.isbnno);
	scanf("%d",&b1.book_id);
	scanf(" %[^\n]s",b2.title);
	scanf(" %[^\n]s",b2.name);
	scanf("%d",&b2.isbnno);
	scanf("%d",&b2.book_id);
	printf("\nBook 1 Title=%s",b1.title);
	printf("\nBook 1 ISBN=%d",b1.isbnno);
	printf("\nBook 1 Autnor=%s",b1.name);
	printf("\nBook 1 id=%d",b1.book_id);
	printf("\nBook 2 Title=%s",b2.title);
	printf("\nBook 2 ISBN=%d",b2.isbnno);
	printf("\nBook 2 name=%s",b2.name);
	printf("\nBook 2 id=%d",b2.book_id);

}
