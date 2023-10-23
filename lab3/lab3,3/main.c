#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,arr[100]={0},min=0,max=0;
    printf("Please enter size of array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
        else if(arr[i]<min){
        min = arr[i];
        }
    }
    printf("maximum number is: %d\n",max);
    printf("minimum number is: %d\n",min);
    return 0;
}
