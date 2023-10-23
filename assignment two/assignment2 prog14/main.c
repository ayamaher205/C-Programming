#include <stdio.h>
#include <stdlib.h>
int *fibonacci(int x);
int main()
{
    int x=0,*n;
    printf("please enter number:");
    scanf("%d",&x);
    n=fibonacci(x);
    for(int i=0;i<=x;i++){
        printf("%d",n[i]);
    }
    return 0;
}
int *fibonacci(int x){
    int y=0,arr[100]={0};
    arr[1]=1;
    for(int i=2 ;i<=x;i++){
        y=arr[i-2]+arr[i-1];
        arr[i]=y;
    }
    for(int i=0;i<=x;i++){
        printf("%3d",arr[i]);
    }
}
