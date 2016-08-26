#include<stdio.h>

int main()
{
	int a = 12345;
	printf("int 类型的数据长度：%d \n", sizeof(int)); // int 的长度是4， 测试如果长度给5，输出什么
	
	printf("a 的长度是：%d \n",sizeof(a)); //给出a的长度是4！！！why？？？
	printf("长度为5 的int输出结果：%d \n", a); // int a 的长度等于4，正常输出5个数，没有报错。
	
	short int s_a = 123;
	printf("short int 的长度是：%d \n",sizeof(short int)); 
	
	long int l_a = 123321;
	printf("long int 的长度：%d \n",sizeof(long int));
	
	long long int l_l_a = 123321;
	printf("long long int 的长度：%d \n",sizeof(long long int));
	
	//printf("_Bool 的长度：%d \n",sizeof(_Bool));
	
	unsigned int u_a = 1;
	printf("无符号的int：%u \n",u_a);
	
	unsigned int u_b = -1;
	printf("无符号的int：%u \n",u_b);
	
	
	
	return 0; 
 } 
