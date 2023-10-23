#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0,y=0;
     long long int pow=1;
    printf("please enter the base and exponent of the number: ");
    scanf("%d %d",&x,&y);
    for (int i=1;i<=y;i++){
        pow*=x;
    }
    printf("the power number = %lli\n",pow);
    return 0;
}
