int *ptr; 
ptr = (int *)0x67a9; 	//地址
*ptr = 0xaa55;		//赋值




#include <stdio.h>

int main()
{
    int a=10;
    int *p=&a;
    
    void *p_v;
p_v=&a;

void *p_m=&a;	可以	
*p_v=&a;		错误	
    
    printf("Hello World %d\n",*p);
    printf("p_v %d",*(int *)p_v);

    return 0;
}

