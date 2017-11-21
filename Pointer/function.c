#include<stdio.h>


 void  say_hello(const char *str)
{

	printf("%s \n",str);


}



void main(void)
{

	void (*f)(const char *) = say_hello;
	f("ssadada");

}
