#include <stdio.h>
#include <stdlib.h>

int main()
{
    char first_name[100],last_name[100],full_name[100];
    printf("please enter your fist name: ");
    scanf("%s",first_name);
    printf("\nplease enter your last name: ");
    scanf("%s",last_name);
    int i=0;
    while(first_name[i]!='\0'){
            full_name[i]=first_name[i];
            i++;
    }
    int j=0;
    while(last_name[j]!='\0'){
            full_name[i]=last_name[j];
            j++;
            i++;
    }
    printf("your full name is: %s",full_name);
    return 0;
}
