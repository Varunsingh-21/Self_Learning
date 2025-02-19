#include<stdio.h>
#include<math.h>
int main(){
    int n,d,i,n2,n3;
    float sum=0;
    printf("enter n : ");
    scanf("%d",&n);
    n2=n;
    n3=n2;
    i=1;
    while(i<=n){
        d=n%10;
        if(n%10==n){
            break;
        }
        n=n/10;
        i++;
    }
    printf("%d",i);
    for(sum;sum>=sum;sum=sum){
        d=n2%10;
        sum=sum+pow(d,i);
        if(n2%10==n2){
            break;
        }
        n2=n2/10;
    }
    printf("\n%f",sum);
    if(sum==n3){
        printf("\n------ Armstrong number ------");
    }
    else{
        printf("\n***** Not an Armstrong number *****");
    }
}