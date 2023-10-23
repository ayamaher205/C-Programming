#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[100]={"informationTechnologyInstitution"},x = '0';
    printf("please enter character:");
    scanf("%c",&x);
    int i=0,count=0;
    while(arr[i]!='\0'){
        if(arr[i]>='A'&&arr[i]<='Z'){
                arr[i]+=32;
        }
            if(arr[i]==x){
                count++;
            }
        i++;
    }
    printf("%c repeated for %d",x,count);
    return 0;
}
