#include<stdio.h>

#define SIZE 4

int sum(int ar[],int n);
void add_to(const int ar[],int n,int val);
void main(void)
{


	int num[SIZE]={20,43,22,44};
	long an;
	printf("size :%d\n",sizeof(num));
	an = sum(num,SIZE);
	printf("%lu\n",an);


	printf("-----------------------\n");

	add_to(num,SIZE,3);
	for(int i=0;i<SIZE;i++)
	{
	printf("i   %d\n",num[i]);
	}
}


int sum( int ar[],int n)
{

	int total=0;
	for(int i =0;i<n;i++)
	{
		total+=ar[i];
	}
	return total;


}


void add_to(const int ar[],int n ,int val)

{
	int i;
	for(i = 0;i<n;i++)
	{
		ar[i] +=val;
	}

}
