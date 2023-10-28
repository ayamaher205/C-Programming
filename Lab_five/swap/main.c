#include <stdio.h>
#include <stdlib.h>
void swap(int *x,int *y);
void swap2(int *x,int *y);
void swap3(int *x,int *y);
int main()
{
    int x =5,y=7;
    printf("x=%d and y= %d before swapping\n",x,y);
    swap(&x,&y);
    printf("x=%d and y= %d after swapping2\n",x,y);
    x =5,y=7;
    swap2(&x,&y);
    printf("x=%d and y= %d after swapping2\n",x,y);
    x =5,y=7;
    swap3(&x,&y);
    printf("x=%d and y= %d after swapping3\n",x,y);
    return 0;
}
void swap(int *x,int *y){
    int temp = *x;
    *x=*y;
    *y = temp;
}
void swap2(int *x,int *y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
void swap3(int *x,int *y){
    *x=*x**y;
    *y=*x / *y;
    *x=*x / *y;
}
