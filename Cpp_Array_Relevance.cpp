#include<iostream>
#include<string.h>
using namespace std;

void array_point_relevance_01()
{
	int a_i[10];
	cout << &a_i[0] ; // &�������ַ ��16���� 
}


void  array_point_relevance_02()
{
	int a_i_01[] = {1,2,3,4,5};
	int a_i_02[] = {7,8,9};
	
	int* p_i_01 = a_i_01;
	int* p_i_02 = a_i_02;
	
	//ָ�����
	cout << "��ͬ����ָ�������ָ��1 - ָ��2��" << p_i_02 - p_i_01 << "\n"; //�����-4    ������ûɶ���� ��ָ���ָ���໥�Ӽ�û�����塣 
	
	cout <<  "ͬһ�������ָ�������" <<  &a_i_01[4] - &a_i_01[1] << "\n"; //�����3 
	
	//ָ��+����
	cout <<  p_i_01 + 2 << ":" << *(p_i_01 + 2) << "\n"; //�����3    ָ��+���� = ָ�� 
	
	cout <<  sizeof(a_i_01); // 20 ???  *�����C++ʵ�ֶ����ṩ�����鷶Χ�ļ�飬NND˵�ǱȽϵͼ���
	
}

int main()
{
	array_point_relevance_02();
	return 0;
}
