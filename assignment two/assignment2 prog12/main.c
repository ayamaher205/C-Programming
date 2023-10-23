#include <stdio.h>
#include <stdlib.h>
int heating_time(int temp);
int main()
{
    int x=0;
    printf("please enter temperature of water: ");
    scanf("%d",&x);
    printf("required heating time = %d",heating_time(x));
    return 0;
}
int heating_time(int temp){
    if(temp>=30&&temp<60){
        return 7;
    }
    else if(temp>=0&&temp<=90){
        return 3;
    }
    else if(temp>90&&temp<=100){
        return 1;
    }
    else {
        return 0;
    }
}
