#include<stdio.h>
#include<math.h>
int main(){
    int n,i,sum=0;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+(i*pow((-1),i+1));

    }
    printf("%d",sum);
}