#include<iostream>
#include<string.h>

using namespace std;

void array_point_01()
{
	//��������ֿ�����Ϊ�����һ��Ԫ�ص�ָ�� 
	int a_i[] = {1,2,3,4,5,6};
	
	int* p_i = a_i;//ָ������ĵ�һ��Ԫ�ء� 
	int* p_i_1 = &a_i[0]; //ָ������ĵ�һ��Ԫ�ء� 
	
	int* p_last_next = &a_i[6];//ָ�����һ��Ԫ�صĺ���һ��Ԫ�� ,��ָ����������κ�һ��Ԫ�أ����Բ��ܶ���д 
	
	cout << *p_i << "\n";
	
	cout << p_last_next;
	
	cout << *p_last_next;
} 

void array_point_02()
{
	char ch[] = "China";
	
	//��ʽ�İ�char����ת����charָ��  ***������ָ�뵽�������ʿת�� 
	char* p_ch = ch; //ָ������ĵ�һ��Ԫ�ء�

	cout << strlen(p_ch) << "\n"; //�ַ����ĳ��� 5  
	cout << strlen(ch) << "\n";
	cout << *p_ch ;
	
}

void array_point_03()
{
	char a_ch[] = {'a','b','c','d'};
	
	//���������ȼ� 
	for(int i = 0; i < strlen(a_ch); i++) cout << "a_ch:" << (a_ch[i]) << "\n";
	
	for(char* p = a_ch; strlen(p); p++) cout << "p:" <<*p << "\n"; //
	
	cout << strlen(a_ch);
}

int main() 
{
	array_point_03();
}
