#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3


int main()
{
    int arr[ROW][COL]={{2,1,4},{8,3,9},{7,4,1}},sum=0,average=0;
    for(int i =0;i<COL;i++){
        sum=0;
        for(int j =0;j<ROW;j++)
        {
            sum+=arr[j][i];
        }
        average= sum/COL;
        printf("average of column %d = %d\n",i+1,average);
    }
    return 0;
}
