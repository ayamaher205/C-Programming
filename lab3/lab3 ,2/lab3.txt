#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,arr[100]={0};
    printf("Please enter size of array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("value of element %d: %d\n",i,arr[i]);
    }
    return 0;
}
