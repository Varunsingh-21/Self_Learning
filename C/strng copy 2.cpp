#include<stdio.h>
#include<string.h>
int main(){
    char x[9];
    char y[7]="helloo";
    // the string which would recieve the copied string must hv equal of more space to prevent abnormalisation
    strcpy(x,y);
    printf("%s",x);
}