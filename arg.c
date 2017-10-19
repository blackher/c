#include<stdio.h>
#include<stdarg.h>


int demo(char *msg, ... )  
{  
    va_list argp;                    /* 定义保存函数参数的结构 */  
    int argno = 0;                    /* 纪录参数个数 */  
    char *para;                        /* 存放取出的字符串参数 */                                      
    va_start( argp, msg );          /* argp指向传入的第一个可选参数，      msg是最后一个确定的参数 */  
    
    while (1) 
    {  
        para = va_arg( argp, char *);                 /*      取出当前的参数，类型为char *. */  
        if ( strcmp( para, "/0") == 0 )  
                                                      /* 采用空串指示参数输入结束 */  
            break;  
        printf("Parameter #%d is: %s/n", argno, para);  
        argno++;  
    }  
    va_end( argp );                                   /* 将argp置为NULL */  
    return 0;  
}

void main( void )  
{  
    demo("DEMO", "This", "is", "a", "demo!" ,"333333", "/0");  
}  

