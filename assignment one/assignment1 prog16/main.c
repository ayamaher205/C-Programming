#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, n=0,revers=0;
    printf("please enter number: ");
    scanf("%d",&x);
    n=x%10;
    n*=100;
    revers=n;
    x/=10;
    n=x%10;
    revers+=n*10;
    x/=10;
    revers+=x;
    printf("reverse number equal: %d",revers);
    return 0;
}
