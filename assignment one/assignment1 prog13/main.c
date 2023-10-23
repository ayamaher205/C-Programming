#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n=0, flag=1,count=2;
	printf("please enter the number: ");
	scanf("%d",&n);
	while(n<0){
        printf("OOPS! number should be positive, enter it again: ");
        scanf("%d",&n);
    }
    if(n==2){
        printf("number is prime");
    }
   /* else{
    for(int i=2;i<=10;i++){
        if(n%i==0&&n!=i){
            flag=0;
            break;
        }
    }
    if(flag!=0){
        printf("number is prime");
    }
    else {
        printf("number isn't prime");
    }
    }*/
    else{
            while( count<=10){
                if(count!=n&&n%count==0){
                    flag=0;
                }
                count++;
                }
            if(flag==1){
                printf("number is prime");
            }
            else {
                printf("number isn't prime");
            }
    }
    return 0;
}
