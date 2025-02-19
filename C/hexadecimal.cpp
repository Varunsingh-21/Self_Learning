#include<stdio.h>
void dtohd(int);
char c[]={'A','B','C','D','E','F'};
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    dtohd(n);
}
void dtohd(int n){
    int m,t;
    char y;
    if(n>0){
        if(n%16>=10){ t=(n%16)%10;
        y=c[t];
        n=n/16;
        dtohd(n);
        printf("%c",y);
        }
        else{
            m=n%16;
            n=n/16;
             dtohd(n);
            printf("%d",m);
        }
    }
    else{
        return;
    }
}