#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array[100] = "palestine",array_copy[100];
    int i=0;
    while(array[i]!='\0')
    {
        array_copy[i]=array[i];
        i++;
    }
    printf("%s is copy of %s",array_copy,array);
    return 0;
}
