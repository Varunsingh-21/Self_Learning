#include<stdio.h>
#include<string.h>
int main(){
    char x[10]="hello";
    char y[9]="hello";
    // for comparison size of string may diffr bt the places with cntent must be same
    if(strcmp(x,y)==0){
        printf("compared");
    }
    else{
        printf("not compared");
    }
}