#include<stdio.h>
void main(void)
{
	int zipo[4][2] = {{1,2},{3,4},{5,6},{7,8}};
	printf("zipo =%p,  zipo+1 = %p \n", zipo , zipo+1);


	printf("----------------------------------\n");
	
	printf("zipo[0] = %p , zipo[0]+1 = %p\n",zipo[0],zipo[0]+1);


	printf("-----------------------------------\n");

	printf("*zipo = %p  ,*zipo+1 = %p\n", *zipo ,*zipo+1);
	
	printf("-----------------------------------\n");
	printf("zipo[1][3] = %d",zipo[1][3]);

}
