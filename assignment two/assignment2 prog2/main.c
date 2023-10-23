#include <stdio.h>
#include <stdlib.h>
void is_alphabet(char x);
int main()
{
   char c ='0';
   printf("please enter character: ");
   scanf("%c",&c);
   is_alphabet(c);
    return 0;
}
void is_alphabet(char x){
    if(x>=65&&x<=90||(x>=95&&x<=122))
        printf("character is alphabet");
   else {
    printf("character isn't alphabet");
   }
    }
