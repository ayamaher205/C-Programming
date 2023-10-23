#include <stdio.h>
#include <stdlib.h>
int cube_num(int x);
int main()
{
    int x = 0;
    int pow=1;
    printf("please enter the base and exponent of the number: ");
    scanf("%d",&x);
    printf("the cube of number = %d",cube_num(x));
    return 0;
}
int cube_num(int x){
    int pow = 1;
     for (int i=1;i<=3;i++){
        pow*=x;
    }
    return pow;
}
