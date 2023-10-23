#include <stdio.h>
#include <stdlib.h>
int sum_double(double x, double y);
int main()
{
    double x=0,y=0;
    printf("please enter two numbers: ");
    scanf("%lf %lf",&x,&y);
    printf("the sum  of two numbers = %d",sum_double(x,y));
    return 0;
}
int sum_double(double x, double y){
    int sum =x+y;
    return sum;
}
