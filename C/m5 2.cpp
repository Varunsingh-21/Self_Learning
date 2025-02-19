#include<stdio.h>
int main(){
int x[5][5]={{2,3,4,6,7},{6,7,9,4,2},{0,1,3,7,9},{6,3,4,2,0},{1,7,6,2,1}};
int i,j,rg,cg;
// for(i=0;i<5;i++){
//     for(j=0;j<5;j++){
//     printf("marks of %dth person in %dth subject:",i,j);
//     scanf("%d",&x[i][j]);
//     }
// }

for(i=0;i<5;i++){
    for(j=0,rg=x[i][0];j<5;j++){
        if(x[i][j]>=rg){
            rg=x[i][j];
        }
        else{
            rg=rg;
        }

    }
    printf("%d",rg);
    printf("\n");
}
printf("\n");
for(i=0;i<5;i++){
    for(j=0,cg=x[0][i];j<5;j++){
        if(x[j][i]>=cg){
            cg=x[j][i];
        }
        else{
            cg=cg;
        }
    }
    printf(" %d",cg);
}

}