#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x = 0,check_val = 0;
    printf("please enter positive number: ");
    scanf("%d",&x);
    while(x<0){
        printf("OOPS! number should be positive, enter it again: ");
        scanf("%d",&x);
    }
    check_val = floor(sqrt(x));
    if(sqrt(x)==check_val){
        printf("number is a perfect square");
    }
    else {
        printf("number isn't a perfect square");
    }
    return 0;
}
