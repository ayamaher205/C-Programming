#include <stdio.h>
#include <stdlib.h>
#define ROW 10
#define COL 10


int main()
{
    char arr[ROW]={'0'};
    printf("please enter string character by character:");
    for(int i =0;i<ROW;i++){
             scanf("%s",arr[i]);
    }
    printf("string is : %s",arr);
    return 0;
}
