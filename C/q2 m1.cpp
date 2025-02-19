#include<stdio.h>
#include<math.h>
float sumfact();
int main(){
    sumfact();
}
float sumfact(){
    float sum=0;
    int n,i,fact=1;
    printf("enter n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        fact=fact*i;
        if(i%2==0){
        sum=sum-pow(i,i)/(float)fact;
    }
    else{
        sum=sum+pow(i,i)/(float)fact;
    }
    
    }
    printf("%f",sum);
}