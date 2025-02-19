#include<stdio.h>
#include<string.h>
int main(){
    char x[10];
    char y[10]="hello";
    strcpy(x,y);
    // y will be copied to x
    printf("%s",x);
}