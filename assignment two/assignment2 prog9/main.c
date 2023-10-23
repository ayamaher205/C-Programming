#include <stdio.h>
#include <stdlib.h>
void swap(int x,int y);
int main()
{
    int x=0,y=0;
    printf("please enter x and y: ");
    scanf("%d %d",&x,&y);
     swap(x,y);
    return 0;
}
void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    printf("x = %d y = %d",x,y);
}
