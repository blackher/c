#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>



int main()
{
	FILE *pFile;
	long lSize;
	char *buffer;
	size_t result;
	
	pFile = fopen("/tmp/s.txt","rb");
	if(pFile == NULL)
	{
		fputs("error ",stderr);
		exit(1);
	}
	

	fseek(pFile,0,SEEK_END);//set p to file_end
	lSize =  ftell(pFile);// size from start to end
	rewind(pFile);//set p to start

	buffer = (char *) malloc(sizeof(char)*lSize);

	if(buffer ==NULL)
	{
		fputs("memery error",stderr);
		exit(2);
	}

	result = fread(buffer,1,lSize,pFile);
	if(result != lSize)
	{
		fputs("reading error",stderr);
		exit(3);
	}else{

	printf("result : %s",buffer);
	
	}

	fclose(pFile);
	free(buffer);
	return 0;


}


