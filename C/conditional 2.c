#include<stdio.h>
int main(){
    int days;
    printf("enter days");
    scanf("%d",&days);
    days <=5 ? printf("%f",days*0.5) : days>5 && days<=10 ? printf("%d",days*1):days>10 && days<=30 ? printf("%d",days*5):printf("membership cancel");
}