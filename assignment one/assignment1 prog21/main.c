#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    printf("please enter number: ");
    scanf("%d",&n);
    for(int i =n;i>=0;i--){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
            printf("*");
        for(int j=0;j<=i*2;j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(int j=0;j<=n;j++){
            printf(" ");
        }
    printf("*");
    printf("\n");
    for(int i =0;i<=n;i++){
        for(int j=n-i;j>0;j--){
            printf(" ");
        }
            printf("*");
        for(int j=i*2;j>=0;j--){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    return 0;
}
