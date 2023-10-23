#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <dos.h>
#include <dir.h>
#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75
#define HOME 71
#define END 79
#include "standard_types.h"
#include"functions.h"

int main()
{
    int position =0,size=0;
    char c=0;
    char flag='N';
    struct student students[100];
    while(flag != 'Y' && flag != 'y'  ){
        char flag1='n';
        /*gotoxy(COL,20);
        printf("Enter position :-");
        scanf("%d",&position);*/
        system("cls");
        display_menu(position);
        c=getch();
        if(-32 == c ){
            c=getch();
            switch (c)
            {
                case UP:
                case LEFT:
                     position--;
                     if(position<0){
                        position=2;
                     }
                    break;
                case DOWN:
                case RIGHT:
                    position++;
                     if(position>2){
                        position=0;
                     }
                    break;
                case HOME:
                    position=0;
                    break;
                case END:
                    position=2;
                    break;


            }
        }
        else if(13 == c){
          gotoxy(COL,20);
          printf("Enter ");
            switch(position){
            case 0:
                system("cls");
                gotoxy(COL, 10 );
                printf("ADD NEW Students\n");
                while(flag1 !='y'&&flag1 !='Y'){
                        size++;
                        flag1 = scan_struct_Students(students,flag1);
                }
                /* backspace
                char x=5;// ssss
                 while(x!=8){
                    x=getch();
                }*/
            break;
            case 1:
                system("cls");
                gotoxy(COL, 10 );
                print_struct_Students(students,size);
                getch();// ssss
            break;
            case 2:
                system("cls");
                gotoxy(COL, 10 );
                printf("Exit ");
                printf("if you Exit press y or Y \n");
                flag=getch();// ssss
            break;


            }
        }
        else{
                // Not action not used
        }

    }
    }
