#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp = NULL;
 
   fp = fopen("/root/c/test.txt", "w+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
}

