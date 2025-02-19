#include<stdio.h>

int main(){
    FILE *ptr,*ctr;
    int i,j,k,y[3][3]={{2,1,3},{5,9,7},{7,6,4}},x[3][4]={{2,3,4,2},{5,8,6,1},{4,7,3,0}},a[3][3],p[3][4],z[3][4];
    ptr=fopen("matrix1.txt","w");
    fwrite(y,sizeof(y),1,ptr);
    fclose(ptr);
    ctr=fopen("matrix2.txt","w");
    fwrite(x,sizeof(x),1,ctr);
    fclose(ctr);
    ptr=fopen("matrix1.txt","r");
    fread(a,sizeof(a),1,ptr);
    fclose(ptr);
    ctr=fopen("matrix2.txt","r");
    fread(p,sizeof(p),1,ctr);
    fclose(ctr);
    // for(i=0;i<3;i++){
    //     for(j=0;j<4;j++){
    //         printf("%d",p[i][j]);
    //     }
    //     printf("\n");
    // }
    for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        for(k=0,z[i][j]=0;k<3;k++){
            z[i][j]=z[i][j]+(a[i][k]*p[k][j]);
        }
        printf(" %d",z[i][j]);
            
        }
        printf("\n");
    }


    return 0;
}