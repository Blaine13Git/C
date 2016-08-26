#include<stdio.h>

int main()
{
    printf("Begin Test Bit(测试位运算符) \n");

    /*四种进制*/
    int a = 0b10;  //二进制
    int b = 010;  //八进制
    int c = 10;  //十进制
    int d = 0x10;  //十六进制

    printf("a = %d \n",a);
    printf("b = %d \n",b);
    printf("c = %d \n",c);
    printf("d = %d \n",d);

    /*
    *位运算符
    * &  与    1 & 1 = 1，1 & 0 = 0
    * |  或
    * ^  异或
    * ~  取反（镜像，取反后相加结果=-1）
    * >>  右移
    * <<  左移
    */
    int a1 = 0b1;
    int a2 = 0b0;
    printf("\n与& 运算\n");
    printf("1 & 1 = %d\n",(a1 & a1));
    printf("1 & 0 = %d\n",(a1 & a2));
    printf("0 & 0 = %d\n",(a2 & a2));
    printf("0 & 1 = %d\n",(a2 & a1));

    printf("\n或| 运算\n");
    printf("1 | 1 = %d\n",(a1 | a1));
    printf("1 | 0 = %d\n",(a1 | a2));
    printf("0 | 0 = %d\n",(a2 | a2));
    printf("0 | 1 = %d\n",(a2 | a1));


    printf("\n异或^ 运算\n");
    printf("1 ^ 1 = %d\n",(a1 ^ a1));
    printf("1 ^ 0 = %d\n",(a1 ^ a2));
    printf("0 ^ 0 = %d\n",(a2 ^ a2));
    printf("0 ^ 1 = %d\n",(a2 ^ a1));

    printf("\n取反~ 运算\n");
    printf("~1 = %d\n",(~a1));
    printf("~0 = %d\n",(~a2));

    int a3 = 0b111;
    printf("%d >> 1 = %d\n",a3,(a3>>1));  //左移一位变成0b11 = 3
    printf("%d << 1 = %d\n",a3,(a3<<1));  // 右移1位变成0b1110 = 14

    return 0;
}
