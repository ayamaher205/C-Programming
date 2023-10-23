#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp_c = 0;
    double temp_f = 0;
    printf("please enter temperature in Celsius: ");
    scanf("%d",&temp_c);
    temp_f = temp_c *(9/5) + 32;
    printf("temperature in Fahrenheit equal %f",temp_f);
    return 0;
}
