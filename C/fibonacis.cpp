#include<stdio.h>
int main(){
    
int n,a=0,b=1,c;
printf("enter n");
scanf("%d",&n);
 while(a<n,b<n){
     c=a+b;
     printf(" %d",c);
     a=b;
     b=c;
     if(c>n){
         break;
     }
 }
 }




