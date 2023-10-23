#include <stdio.h>
#include <stdlib.h>
void is_positive(int x);

int main()
{
    int num;
    printf("please enter number: ");
    scanf("%d",&num);
    is_positive(num);
    return 0;
}
void is_positive(int x){
    if(x>0){
        printf("number is positive");
        }
        else if(x<0){
            printf("number is negative");
        }
        else {
            printf("number equal zero");
        }
    }

