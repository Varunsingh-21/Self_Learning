#include<stdio.h>
int main(){
    int x[3][3]={{10,40,50},{70,80,90},{70,80,90}};
    int sum=0,i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i+j==2){
                sum=sum+x[i][j];
            }
            else{
                sum=sum;
            }

        }
        
    }
    printf("%d",sum);
}