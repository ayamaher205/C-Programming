#ifndef function
#define function
#include <windows.h>
#include"standard_types.h"
struct student {
    u8 name[10];
    u8 gender;
    u8 age;
    s32 id;
};
void SetColor(int ForgC);
void gotoxy(int x,int y);
void display_menu(int position);
void go_exit();
void go_new();
void go_display();
void display_struct_Student(struct student s);
char scan_struct_Students(struct student s[],char f);
void print_struct_Students(struct student s[],int size );
extern int COL;
extern int size ;
#endif
