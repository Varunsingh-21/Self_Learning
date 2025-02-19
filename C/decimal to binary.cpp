#include<stdio.h>
void dtob(int);
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    dtob(n);
}
void dtob(int n){
    if(n>0){
        int y=n%2;
        n=n/2;
        dtob(n);
        printf("%d",y);
    }
}