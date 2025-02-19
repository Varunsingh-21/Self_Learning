#include<stdio.h>
int main(){
    int n,i ,sum=0;
    printf("enter n");
    scanf("%d",&n);
    for(i=0;i<=n;i=i+2){
        sum=sum+i;

    }
    printf("%d",sum);
}