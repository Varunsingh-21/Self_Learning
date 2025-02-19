#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++){
            if(i==j){
                printf(" *");
            }
            
            else{
                if(i+j==n+1 && i!=(n+1)/2){
                    printf(" *");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}