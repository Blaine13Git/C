#include<stdio.h>

int main()
{
	int a = 12345;
	printf("int ���͵����ݳ��ȣ�%d \n", sizeof(int)); // int �ĳ�����4�� ����������ȸ�5�����ʲô
	
	printf("a �ĳ����ǣ�%d \n",sizeof(a)); //����a�ĳ�����4������why������
	printf("����Ϊ5 ��int��������%d \n", a); // int a �ĳ��ȵ���4���������5������û�б���
	
	short int s_a = 123;
	printf("short int �ĳ����ǣ�%d \n",sizeof(short int)); 
	
	long int l_a = 123321;
	printf("long int �ĳ��ȣ�%d \n",sizeof(long int));
	
	long long int l_l_a = 123321;
	printf("long long int �ĳ��ȣ�%d \n",sizeof(long long int));
	
	//printf("_Bool �ĳ��ȣ�%d \n",sizeof(_Bool));
	
	unsigned int u_a = 1;
	printf("�޷��ŵ�int��%u \n",u_a);
	
	unsigned int u_b = -1;
	printf("�޷��ŵ�int��%u \n",u_b);
	
	
	
	return 0; 
 } 
