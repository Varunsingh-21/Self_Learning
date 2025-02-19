#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        if(i==1){
            for(j=1;j<=5;j++){
                printf(" *");
            }
        }
        else{
            for(j=1;j<=5;j++){
                if(j==i||j==1){
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