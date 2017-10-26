#include<stdio.h>

#define SIZE 4

int sum(int ar[],int n);

void main(void)
{


	int num[SIZE]={20,43,22,44};
	long an;
	printf("size :%d\n",sizeof(num));
	an = sum(num,SIZE);
	printf("%lu",an);

}


int sum(int ar[],int n)
{

	int total=0;
	for(int i =0;i<n;i++)
	{
		total+=ar[i];
	}
	return total;


}
