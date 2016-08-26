#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    //定义字符串，方式一，char string[] = {"Hello World!"};
    char string[] = {"Hello world!"};
    printf("No.1 is :%s\n",string);
    printf("No.1 is :%c\n",&string[0]);
    printf("No.1 is :%c\n",&string);

    //定义字符串，方式二：char * string02 = "Hi world!";
    char* string02 = "Hi world!";
    printf("No.2 is :%s\n",string02);

    const LEN = 50;
    char temp[LEN];
    memset(temp,0,100);//给temp内存清零
    strcat(temp,"this is a");
    strcat(temp," test");
    //printf("temp is :%s\n",temp);
    puts (temp);
    return 0;
}
