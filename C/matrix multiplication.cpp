#include<stdio.h>
int main(){
int x[3][3]={{2,3,4},{5,6,7},{8,9,10}};
int y[3][3]={{7,5,9},{6,2,4},{7,3,1}};
int z[3][3];
int i,j,k;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        for(k=0,z[i][j]=0;k<3;k++){
            z[i][j]=z[i][j]+(x[i][k]*y[k][j]);
        }
        printf(" %d",z[i][j]);
            
        }
        printf("\n");
    }
}
