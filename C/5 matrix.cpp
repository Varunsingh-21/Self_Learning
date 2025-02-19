#include<stdio.h>
int main(){
int x[5][5];
int i,j;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
    printf("marks of %dth person in %dth subject:",i,j);
    scanf("%d",&x[i][j]);
    }
}
int t=0;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        if(x[i][j]>t){
            t=x[i][j];
        }
        else{
            t=t;
        }

    }
    printf("%d",t);
    printf("/n");
}
}