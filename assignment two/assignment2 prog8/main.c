#include <stdio.h>
#include <stdlib.h>
void prime(int x,int y);
int main()
{
    int x=0,y=0;
    printf("please enter two numbers: ");
    scanf("%d %d",&x,&y);
    prime(x,y);
    return 0;
}
void prime(int x,int y){
    for(int i =x ;i<=y;i++){
            int flag =1;
        for(int j=2;j<=10;j++){
                if(i%j==0&&i!=j){
                    flag=0;
                }
            }
            if(flag!=0){
                printf("%3d",i);
            }
        }
    }
