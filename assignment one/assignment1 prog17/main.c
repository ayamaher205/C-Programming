#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,count=0;
    printf("please enter number: ");
    scanf("%d",&n);
    while (n != 0) {
        n = n / 10;
        count++;
    }
    printf("number of digits equal: %d",count);
    return 0;
}
