#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, y=0;
    printf("please enter two numbers: ");
    scanf("%d %d",&x,&y);
    if(x>y){
        printf("numbers aren't equal and the first number has the higher value");
    }
    else if(y>x){
        printf("numbers aren't equal and the second number has the higher value");
    }
    else{
        printf("number one is equal number two");
    }
    return 0;
}
