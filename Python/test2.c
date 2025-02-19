#include<stdio.h>
void main(){
    int c=1,i,n=-1;
    for(i=0;i<c;i++){
        printf("enter n");
        scanf("%d",&n);
        if(n<0){
            c++;
        }
    }
    printf("%d",n);
}