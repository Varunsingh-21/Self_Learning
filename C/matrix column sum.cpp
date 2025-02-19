#include<stdio.h>
int main(){
    int x[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    int sum=0,i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=sum+x[j][i];
        }
        printf(" %d",sum);
        sum=0;
    }
}