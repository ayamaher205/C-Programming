#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void delay(int number_of_seconds)
{
    int milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}
int main()
{
    int n=0,row=0,col=0,num = 1;
    printf("Enter Number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Not valid, Please enter odd number: ");
    }
    else{
            row = 1;
            col =(n+1)/2;
            do{
                delay(1);
                gotoxy(col*3,row);
                printf("%3d",num);
                if(num%n==0){
                    row++;
                }
                else{
                    row--;
                    col--;
                }
                if(row==0){
                    row=n;
                }
                if(col==0){
                    col=n;
                }
                num++;
    }
    while(num<=n*n);
    }

    return 0;
}
