#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10]={1,2,6,7,78,8,8,9,14,25},arr2[10]={5,1,2,6,7,78,8,8,9,14},sum[10]={0};
    int i=0;
    while(i<10){
            sum[i]=arr2[i]+arr[i];
            printf("summation of elements in indeces %d= %d\n",i,sum[i]);
        i++;
    }
    return 0;
}
