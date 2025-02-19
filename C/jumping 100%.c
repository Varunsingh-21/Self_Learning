#include<stdio.h>
int main(){
    int n,c;
   c:
    printf("\n enter n");
    scanf("%d",&n);
    printf("\n enter 0 to check even/odd" );
    printf("\n enter 1 to check leap year or not");
    scanf("%d",&c);
    if(c==0){
        goto a;
    }
    else{ if(c==1){
        goto b;
    }
    else{
        printf("ERROR");
        goto c;
    }
    }
    a: if(n%2==0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    if(c==0){
        goto c;
    }


    b:if(n%4==0){
        printf("leap year");
    }
    else{
        printf("not a leap year");
    }
    if(c==1){
        goto c;
    }
}