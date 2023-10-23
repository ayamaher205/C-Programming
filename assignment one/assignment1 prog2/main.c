#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[]={'0'};
    int grade = 0;
    printf("please enter your name: ");
    scanf("%s", &name);
    printf("please enter your grade:");
    scanf("%d", &grade);
    printf("Your name is: %s and your grade equal %d",name,grade);
    return 0;
}
