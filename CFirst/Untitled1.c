#include<stdio.h>
#define MY_NUM 13 //在编译的时候把所有MY_NUM替换成13
const int MY_NUM2 = 16; //在运行的时候，推荐使用这个

int main(){
    printf ("123 \n");
    int a_i[5] = {1,23};

    char name = "Blaine";
    //printf(sizeOf(name));

    printf("My num is：%d \n",MY_NUM);
    printf("我的数字2 is：%d \n",MY_NUM2);
    return 0;
}
