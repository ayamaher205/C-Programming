#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array[100] = "palestin@#$is*&^free";
    int i=0;
    while(array[i]!='\0')
    {
        while(!((array[i]>='a'&&array[i]<='z')||(array[i]>='A'&&array[i]<='Z')||array[i]=='\0')){
               int j=i;
            while(array[j]!='\0')
            {
            array[j] = array[j+1];
            j++;
            }
            array[j] = '\0';
            }
        i++;
    }
    printf("array after removing all special characters = %s",array);
    return 0;
}
