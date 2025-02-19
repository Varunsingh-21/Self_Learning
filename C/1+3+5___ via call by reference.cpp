#include<stdio.h>
int sumoddnatural(int,int *);
int main(){
    int sum=0,n;
    printf("enter n");
    scanf("%d",&n);
    sumoddnatural(n,&sum);
    printf("%d",sum);

}
int sumoddnatural(int n,int *sum){
    int i;
    for(i=1;i<=n;i=i+2){
        *sum=*sum+i;
    }
}