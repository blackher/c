#include<stdio.h>

#define M 12

void main(void)
{

	int day[M] = {31,23,[5]=32,44,56};
	for(int i =0;i<M;i++)
	{
		printf("%d   %p\n",i+1,*(day+i));
	}


}
