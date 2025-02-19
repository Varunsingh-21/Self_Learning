#include<stdio.h>
#include<math.h>
float sumpowfact(); 
int main(){
    float t;
    int n;
    printf("enter n");
    scanf("%d",&n);
    t=sumpowfact(n);
    printf("%f",t);

}
float sumpowfact(int n){
    int i,fact=1;
    float sum=0;
    
    for(i=1;i<=n;i++){
        fact=fact*i;
        sum=sum+pow(i,i)/(float)fact ;
    }
    return(sum);

}
