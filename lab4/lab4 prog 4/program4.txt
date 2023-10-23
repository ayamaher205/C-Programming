#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c=getch();
    if(c==-32){
        printf("Extended");
    }
    else {
        printf("Normal");
    }
    return 0;
}
