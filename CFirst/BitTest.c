#include<stdio.h>

int main()
{
    printf("Begin Test Bit(����λ�����) \n");

    /*���ֽ���*/
    int a = 0b10;  //������
    int b = 010;  //�˽���
    int c = 10;  //ʮ����
    int d = 0x10;  //ʮ������

    printf("a = %d \n",a);
    printf("b = %d \n",b);
    printf("c = %d \n",c);
    printf("d = %d \n",d);

    /*
    *λ�����
    * &  ��    1 & 1 = 1��1 & 0 = 0
    * |  ��
    * ^  ���
    * ~  ȡ��������ȡ������ӽ��=-1��
    * >>  ����
    * <<  ����
    */
    int a1 = 0b1;
    int a2 = 0b0;
    printf("\n��& ����\n");
    printf("1 & 1 = %d\n",(a1 & a1));
    printf("1 & 0 = %d\n",(a1 & a2));
    printf("0 & 0 = %d\n",(a2 & a2));
    printf("0 & 1 = %d\n",(a2 & a1));

    printf("\n��| ����\n");
    printf("1 | 1 = %d\n",(a1 | a1));
    printf("1 | 0 = %d\n",(a1 | a2));
    printf("0 | 0 = %d\n",(a2 | a2));
    printf("0 | 1 = %d\n",(a2 | a1));


    printf("\n���^ ����\n");
    printf("1 ^ 1 = %d\n",(a1 ^ a1));
    printf("1 ^ 0 = %d\n",(a1 ^ a2));
    printf("0 ^ 0 = %d\n",(a2 ^ a2));
    printf("0 ^ 1 = %d\n",(a2 ^ a1));

    printf("\nȡ��~ ����\n");
    printf("~1 = %d\n",(~a1));
    printf("~0 = %d\n",(~a2));

    int a3 = 0b111;
    printf("%d >> 1 = %d\n",a3,(a3>>1));  //����һλ���0b11 = 3
    printf("%d << 1 = %d\n",a3,(a3<<1));  // ����1λ���0b1110 = 14

    return 0;
}
