#include<stdio.h>
#include<math.h>
float sumpowfact(); 
int main(){
    float t;
    t=sumpowfact();
    printf("%f",t);

}
float sumpowfact(){
    int i,n,fact=1;
    float sum=0;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
        sum=sum+pow(i,i)/(float)fact ;
    }
    return(sum);

}
