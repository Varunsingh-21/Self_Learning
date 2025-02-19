#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j,fact=1;
    float sum=0;
    printf("enter n");
    scanf("%d",&n);
i=1,j=1;
while(i<=n){
    fact=fact*i;
if(i%2==0){
    sum=sum+0;
}
else{
    sum=sum+(pow(i,i)/fact);
    j++;
    
}

i++;
}
    printf("%f",sum);
}