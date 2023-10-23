#include <stdio.h>
#include <stdlib.h>
int calculator(int x,int y,char c);
int main()
{
    char x ='A';
    int y=0,z=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&y,&z);
    printf("Enter operator: ");
    scanf(" %c", &x);
    printf("result equal: %d",calculator(y,z,x));
    return 0;
}
int calculator(int x,int y,char c){
    int result=0;
    if(c !='+'&& c !='-'&& c !='/'&&c !='*')
    {
        printf("not valid operation");
        return 0;
    }
    else{
        switch(c){
        case '+':
            result = x+y;
            break;
            case'*':
            result = x*y;
            break;
            case'-':
            result = x-y;
            break;
            case'/':
                if(y==0){
                printf("can't divide on zero so ");
                }
                else{
            result = x/y;
            }
            break;
            defualt:
                printf("invalid operator");
    }
    return result;
    }
}
