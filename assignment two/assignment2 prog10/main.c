#include <stdio.h>
#include <stdlib.h>
int count_holes(int x);
int check_holes(int n);
int main()
{
    int x=0;
    printf("please enter number: ");
    scanf("%d",&x);
    printf("number of holes: %d",count_holes(x));
}
int count_holes(int x){
    int holes=0;
    int n=x%10;
    x/=10;
    holes+=check_holes(n);
    n=x%10;
    x/=10;
    holes+=check_holes(n);
    holes+=check_holes(x);
    return holes;
}
int check_holes(int n){
    if(n==0||n==4||n==6||n==9){
        return 1;
    }
    else if(n==8){
        return 2;
    }
    else {
        return 0;
    }
}
