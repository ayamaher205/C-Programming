#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int is_power2(int x);
int main()
{
    int x=0;
    printf("please enter number: ");
    scanf("%d",&x);
    printf("%d",is_power2(x));
    return 0;
}
int is_power2(int x){
    int n=1;
    if(x==0){
        return 1;
    }
    else{
        while(n<x){
            n*=2;
        }
        if(x==n){
            return 1;
        }
        else{
            return 0;
        }
    }


}
