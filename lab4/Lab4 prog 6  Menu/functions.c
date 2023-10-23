#include"functions.h"
COL = 8;
size=0;
void SetColor(int ForgC){
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }
void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
 void go_new(){
    //system("cls");
    gotoxy(COL,5);
    SetColor(4);
    printf("New");
    gotoxy(COL,7);
    SetColor(15);
    printf("display");
    gotoxy(COL,9);
    SetColor(15);
    printf("exit");
}
void go_display(){
    //system("cls");
    gotoxy(COL,5);
    SetColor(15);
    printf("New");
    gotoxy(COL,7);
    SetColor(4);
    printf("display");
    gotoxy(COL,9);
    SetColor(15);
    printf("exit");
}
void go_exit(){
gotoxy(COL,5);
    SetColor(15);
    printf("New");
    gotoxy(COL,7);
    SetColor(15);
    printf("display");
    gotoxy(COL,9);
    SetColor(4);
    printf("exit");
    gotoxy(COL,11);
    SetColor(15);

}
void display_menu(int position){
    if(position == 0){
         go_new();
    }
    else if(position == 1){
        go_display();
    }
    else if(position == 2){
        go_exit();
    }
    else{
        printf("ERRRRRRRRRRRRRRRRRRORRRRRRRRRRRR");
    }
}
char scan_struct_Students(struct student s[],char f ){
    for(int i=size; f!='y'&&f!='y'; i++){
        size++;
        printf("Enter name [%d]",i+1);
        scanf("%s",s[i].name);
        printf("Enter age [%d]",i+1);
        scanf("%d",&s[i].age);
        printf("Enter ID [%d]",i+1);
        scanf("%d",&s[i].id);
        printf("Enter Gender [%d]",i+1);
        scanf(" %c",&s[i].gender);
        printf("if you want to continue press enter, to exit press y\n");
        f =getch();
    }
    return f;


}
void print_struct_Students(struct student s[],int size ){
    printf("----------------- Display -------------------- \n");
    for(int i=0; i<=size; i++){
          printf("name[%d] = %s \n",i+1,s[i].name);
          printf("gender[%d] = %c \n",i+1,s[i].gender);
          printf("age [%d]=  %d \n",i+1,s[i].age);
            printf("id [%d] =  %d \n",i+1,s[i].id);
    }

}
