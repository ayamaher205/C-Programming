#include <stdio.h>
#include <stdlib.h>
int odd(int x);
int main()
{
    int num =0;
    printf("please enter number: ");
    scanf("%d", &num);
    printf("%d",is_odd(num));
    return 0;
}
int is_odd(int x){
    if(x%2==0){
        return 0;
    }
    else {
        return 1;
    }
}
