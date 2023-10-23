#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array[100];
    printf("please enter string:");
    scanf("%s",array);
    int i=0;
    while(array[i]!='\0')
    {
        if(array[i]>='a'&&array[i]<='z'){
            array[i]-=32;
        }
        i++;
    }
    printf("string: %s",array);
    return 0;
}
