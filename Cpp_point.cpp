#include<iostream>

using namespace std;

int main()
{
	char ch = 'a'; 
	char* c_p = &ch; // &ch������ch ,����ָ�� c_p ���� ch �ĵ�ַ  
	
	char c = *c_p; // ȡ��ָ���ֵ 
	
	cout << "ch�ĵ�ַ��" << c_p << "\n"; 
	cout << "ch��ֵ��" << c ;
}
