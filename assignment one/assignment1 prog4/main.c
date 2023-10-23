#include <stdio.h>
#include <stdlib.h>

int main()
{
    const double pi =3.14159;
    int radius = 0;
    double area = 0, circum = 0;
    printf("please enter the radius of the circle: ");
    scanf("%d",&radius);
    area = pi*radius*radius;
    circum = 2*pi*radius;
    printf("the area of the circle = %lf and the circumference = %lf",area,circum);
    return 0;
}
