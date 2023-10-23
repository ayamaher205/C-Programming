#include <stdio.h>
#include <stdlib.h>
void is_multiply(int x,int y);

int main()
{
    int x=0,y=0;
    printf("please enter two numbers: ");
    scanf("%d %d",&x,&y);
    is_multiply(x,y);
}
void is_multiply(int x,int y){
    if(y%x==0){
        printf("%d is multiply of %d",y,x);
    }
    else{
        printf("%d is multiply of %d",y,x);
    }

}
