#include<stdio.h>
int main()
{
    int i,j,n,fact1=1,fact2=1,fact3=1,r,k,l;

        for(n=0;n<=5;n++)
        {
            for(l=5;l>=n;l--){
                printf(" ");
            }
            for(r=0;r<=n;r++)
            {
                for(i=1;i<=n;i++){
                    fact1=fact1*i;
                }
                for(i=1;i<=r;i++)
                {
                    fact2=fact2*i;
                }
                for(i=1;i<=n-r;i++){
                    fact3=fact3*i;
                }
                printf(" %d",fact1/(fact2*fact3));
                fact1=1;
                fact2=1;
                fact3=1;
        
            }
            printf("\n");
        }
}