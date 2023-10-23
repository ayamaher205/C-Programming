#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x ='A';
    int y=0,z=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&y,&z);
    printf("Enter operator: ");
    scanf(" %c", &x);
    switch(x){
        case '+':
            printf("sum of two numbers: %d", y+z);
            break;
            case'*':
            printf("multiply of two numbers: %d", y*z);
            break;
            case'-':
            printf("sub of two numbers: %d", y-z);
            break;
            case'/':
                if(z==0){
                printf("invalid");
                }
                else{
            printf("division of two numbers: %d", y/z);}
            break;
            defualt:
                printf("invalid operator");
    }
    return 0;
}
