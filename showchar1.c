#include<stdio.h>


void display(char ch, int lines, int width);


void main(void)
{
	int ch,rows,cols;
	printf("enter three character");
	while((ch = getchar()) != '\n')
	{

		scanf("%d %d",&rows,&cols);
		display(ch,rows,cols);
		printf("another");
	}
	printf("bye");
}
	/*displau dunciton */
	void display(char ch, int lines, int width)
	{
		int row,col;
		for(row = 1;row<=lines;row++)
		{
			for (col = 1;col <= width;col++)
			{
				putchar(ch);
			}
			putchar('\n');
		}
	}




