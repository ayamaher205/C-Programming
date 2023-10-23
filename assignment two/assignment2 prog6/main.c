#include <stdio.h>
#include <stdlib.h>
char convert_to_upper(char c);
int is_alphabet(char x);
int main()
{
    char c='0';
    printf("please enter character in lower case:");
    scanf("%c",&c);
    printf("%c",convert_to_upper(c));
    return 0;
}
char convert_to_upper(char c){
     if(c>=65&&c<=90)
    {
        printf("alphabet is already upper case: ");
        return c;
    }
    else {
        c-=32;
        printf("alphabet in upper case: ");
        return c;
    }
}
