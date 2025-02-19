#include<stdio.h>
void addition();
int main(){
    addition();  
}
void addition(){
        int sum=0,i,n;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    
    sum=sum+i;
    }
    printf("%d",sum);
    
    
}