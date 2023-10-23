#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x =0;
    printf("Enter Degree: ");
    scanf("%d", &x);
    if(x>=65&&x<75){
    printf("Good");}
    else if(x>=85&&x<=100){
    printf("Excellent");}
    else if(x>=75&&x<85){
    printf("Very Good");}
    else if(x==55&&x<65){
    printf("Pass");}
    else if(x<50&&x>0){
    printf("Fail");}
    else {
        printf("invalid degree");
    }
    return 0;
}
