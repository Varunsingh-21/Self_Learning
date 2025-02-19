#include<stdio.h>
int main(){
    int n,i,fact=1,sum=0;
    printf("enter n");
    scanf("%d",&n);
i=1;
while(i<=n){
    fact=fact*i;
if(i%2==0){
    sum=sum+0;
}
else{
    sum=sum+fact;
}
i++;
}
    printf("%d",sum);
}