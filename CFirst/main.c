#include <stdio.h>
#include <stdlib.h>

void test_ref()
{
    int i = 3;
    int& r = 0;
    int x = r;

    r = 2;
    printf("%d",x);
}
int main()
{
    printf("Hello world!\n");
    test_ref();
    return 0;
}
