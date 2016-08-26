#include<iostream>
#include<string.h>

using namespace std;

void array_point_01()
{
	//数组的名字可以作为数组第一个元素的指针 
	int a_i[] = {1,2,3,4,5,6};
	
	int* p_i = a_i;//指向数组的第一个元素。 
	int* p_i_1 = &a_i[0]; //指向数组的第一个元素。 
	
	int* p_last_next = &a_i[6];//指向最后一个元素的后面一个元素 ,不指向数组里的任何一个元素，所以不能读和写 
	
	cout << *p_i << "\n";
	
	cout << p_last_next;
	
	cout << *p_last_next;
} 

void array_point_02()
{
	char ch[] = "China";
	
	//隐式的把char数组转换成char指针  ***不存在指针到数组的隐士转换 
	char* p_ch = ch; //指向数组的第一个元素。

	cout << strlen(p_ch) << "\n"; //字符串的长度 5  
	cout << strlen(ch) << "\n";
	cout << *p_ch ;
	
}

void array_point_03()
{
	char a_ch[] = {'a','b','c','d'};
	
	//以下两个等价 
	for(int i = 0; i < strlen(a_ch); i++) cout << "a_ch:" << (a_ch[i]) << "\n";
	
	for(char* p = a_ch; strlen(p); p++) cout << "p:" <<*p << "\n"; //
	
	cout << strlen(a_ch);
}

int main() 
{
	array_point_03();
}
