#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,x=0;
    printf("please enter number: ");
    scanf("%d",&n);
    x=n;
    for(int i =1;i<=n;i+=2){
        for(int j=x/2;j>0;j--){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
        x-=2;
    }
    return 0;
}
