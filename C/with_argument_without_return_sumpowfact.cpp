#include<stdio.h>
#include<math.h>
float sumpowfact(int); 
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    sumpowfact(n);

}
float sumpowfact(int n){
    int i,fact=1;
    float sum=0;
    for(i=1;i<=n;i++){
        fact=fact*i;
        sum=sum+pow(i,i)/(float)fact ;
    }
    printf("%f",sum);

}
