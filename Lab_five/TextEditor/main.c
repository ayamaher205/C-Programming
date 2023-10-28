#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#define ENTER 13
#define LEFT 75
#define RIGHT 77
#define DELETE 8
void gotoxy(int x,int y);

int main()
{
    int pos=0,i=0,size=0;
    printf("please enter size of string: ");
    scanf("%d",&size);
    char arr[100];
    while(1)
    {
        gotoxy(pos,1);
        char ch =getch();
        if(ch==-32){
            ch=getch();
            switch(ch){
        case LEFT:
            pos--;
            if(pos<0){
                pos=0;
            }
            gotoxy(pos,1);
            break;
            case RIGHT:
            pos++;
            if(pos>size){
                pos=size;
            }
            gotoxy(pos,1);

            break;
            }
        }
        else if(ch==DELETE){
                for (int j = pos-1; j < i; j++)
                {
                    arr[j] = arr[j + 1];
                    }
                i--;
                system("cls");
                printf("please enter size of string: %d",size);
                //gotoxy(pos,1);
                printf("\n%s",arr);
        }
        else if(ch==ENTER){
            printf("\n%s",arr);
            break;
        }
        else {
                if(i!=pos)
                i=pos;
            arr[i]=ch;
            printf("%c",arr[i]);
            i++;
            pos++;
        }
    }
    return 0;
}
void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
