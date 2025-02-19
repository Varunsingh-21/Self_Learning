#include<stdio.h>
int main(){
    int i,j,k=0;
    for(i=1;i<=5;i++)
    {
        for(j=1+k;j<=i+k;j++)
        {
            printf(" %d",j);
        }
        k=j-1;
        printf("\n");
    }

}