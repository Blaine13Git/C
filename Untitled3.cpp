#include<stdio.h>

/*����,��*/ 
#define NAME "fengchang" 

int main()
{
	/*����*/
	int a = 13;
	char b = 'f'; //ֻ�ܷ�һ���ַ� ������Ŷ����ȡ��һ�� 
	float c = 11.18;
	double d = 3.1415926;
	
	printf("�ҵ����ֵıȻ����ǣ�%d \n", a);
	printf("�ҵ��գ�%c \n", b);
	printf("��椵������ǣ�%4.2f \n", c);
	printf("Բ����pi��%9.8f", d);
	//printf("Բ����pi��%9.8d", d);  //%9.8f  not %9.8d
	
	/*����*/ 
	printf("���֣�%s",NAME);
	
	return 0;
}
