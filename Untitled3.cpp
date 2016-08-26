#include<stdio.h>

/*常量,宏*/ 
#define NAME "fengchang" 

int main()
{
	/*变量*/
	int a = 13;
	char b = 'f'; //只能放一个字符 ，如果放多个，取最一个 
	float c = 11.18;
	double d = 3.1415926;
	
	printf("我的名字的比划数是：%d \n", a);
	printf("我的姓：%c \n", b);
	printf("大妞的生日是：%4.2f \n", c);
	printf("圆周率pi：%9.8f", d);
	//printf("圆周率pi：%9.8d", d);  //%9.8f  not %9.8d
	
	/*常量*/ 
	printf("名字：%s",NAME);
	
	return 0;
}
