#include<stdio.h>

void up(int);

void  main(void)
{
	up(1);
	int n =9;
	int *p ;
	*p= n;
	printf("%p",p);

}



void up(int n)

{
	if(n<4)
	{
	 up(n+1);
	}
	printf("n %d \n",n);
}
