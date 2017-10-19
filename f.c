#include <stdio.h>
#include<string.h>
struct user
{
	int id;
	char nickname[50];
	char address;
}users;


int main()
{
	int d = 3;
	
	int *p;
	char str[] = "ssada";
	struct user liming;
	p = &d;
	printf("address is %p",p);
	printf("address store is %p",p);
	printf("value is %d \n",*p);	
	printf("%d \n",sizeof(users));
	liming.id = 123;
        strcpy(liming.nickname ,"sada");
	printf("limig size = %lu",sizeof(liming));
	return 0;

}
