#include<stdio.h>
int main(){
    float a,b,c,d;
    printf("enter a,b,c,d");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    a>b?a>c?a>d? printf("a is L"):printf("d is L"): c>d?printf("c is L"):printf("d is L"):b>c?b>d?printf("b is L"):printf("d is L"): c>d? printf("c is L"):printf("d is L");
}