#include<stdio.h>
int main(){
    int i,j,k,l;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=i;k<=5;k++)
        {
            printf("%d",k);
        }
        for(l=4;l>=i;l--){
            printf("%d",l);
        }

        printf("\n");
    }
}