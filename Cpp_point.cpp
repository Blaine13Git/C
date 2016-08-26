#include<iostream>

using namespace std;

int main()
{
	char ch = 'a'; 
	char* c_p = &ch; // &ch，引用ch ,所以指针 c_p 保存 ch 的地址  
	
	char c = *c_p; // 取出指针的值 
	
	cout << "ch的地址：" << c_p << "\n"; 
	cout << "ch的值：" << c ;
}
