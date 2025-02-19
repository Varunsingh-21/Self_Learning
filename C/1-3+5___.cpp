#include<stdio.h>
#include<math.h>
int main(){
int i,n,j,sum=0;
printf("enter n");
scanf("%d", &n);
i=1,j=1;
do{  

    sum=sum+(i*(pow(-1,j+1)));
     j++;
     i=i+2;
    }
while(i<=n);
printf("%d",sum);
}
