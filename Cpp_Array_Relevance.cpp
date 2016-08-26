#include<iostream>
#include<string.h>
using namespace std;

void array_point_relevance_01()
{
	int a_i[10];
	cout << &a_i[0] ; // &，输出地址 ，16进制 
}


void  array_point_relevance_02()
{
	int a_i_01[] = {1,2,3,4,5};
	int a_i_02[] = {7,8,9};
	
	int* p_i_01 = a_i_01;
	int* p_i_02 = a_i_02;
	
	//指针相减
	cout << "不同数组指针相减：指针1 - 指针2：" << p_i_02 - p_i_01 << "\n"; //结果：-4    ？？？没啥意义 ，指针和指针相互加减没有意义。 
	
	cout <<  "同一个数组的指针相减：" <<  &a_i_01[4] - &a_i_01[1] << "\n"; //结果：3 
	
	//指针+常量
	cout <<  p_i_01 + 2 << ":" << *(p_i_01 + 2) << "\n"; //结果：3    指针+常量 = 指针 
	
	cout <<  sizeof(a_i_01); // 20 ???  *大多数C++实现都不提供对数组范围的检查，NND说是比较低级。
	
}

int main()
{
	array_point_relevance_02();
	return 0;
}
