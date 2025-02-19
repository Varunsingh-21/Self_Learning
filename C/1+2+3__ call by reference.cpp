#include<stdio.h>
int sumnatural(int,int*);
int main(){
    int sum=0,n;
    printf("enter n");
    scanf("%d",&n);
    sumnatural(n,&sum);
    printf("%d",sum);

}
int sumnatural(int n,int *sum){
    int i;
    for(i=1;i<=n;i++){
        *sum=*sum+i;
    }
}