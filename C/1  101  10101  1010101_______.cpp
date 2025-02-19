#include<stdio.h>
int main(){
    int i,j,k,l;
        for(i=1;i<=5;i++){
            for(j=5;j>=i;j--){
                printf(" ");
            }
            for(k=1;k<=i;k++){
                if(k%2==0){
                    printf("0");
                }
                else{
                    printf("1");
                }
            }
            for(l=2;l<=i;l++){
                if((i+l)%2==0){
                    printf("1");
                }
                else{
                    printf("0");
                }
            }

            
            printf("\n");
        }
        
    }
