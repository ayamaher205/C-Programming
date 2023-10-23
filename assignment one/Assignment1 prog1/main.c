#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=0,num2=0,result=0;
    printf("please enter number one:");
    scanf("%d",&num1);
    printf("please enter number two:");
    scanf("%d",&num2);
    result = ((num1 +num2)*3)-10;
    printf("result of equation equal %d\n",result);
    return 0;
}
