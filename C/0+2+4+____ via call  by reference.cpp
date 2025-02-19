#include<stdio.h>
int sumnaturaleven(int,int*)
int main(){
    int sum=0,n;
    printf("enter n");
    scanf("%d",&n);
    sumnatural(n,&sum);
    printf("%d",sum);
}
int sumnaturaleven(int n,int *sum){
    int i;
    for(i=0;i<=n;i=i+2){
        *sum=*sum+i;
    }
}