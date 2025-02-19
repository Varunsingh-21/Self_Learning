#include<stdio.h>
int fact(int);
int main(){
    int a=5,factorial;
    factorial=fact(a);
    printf("%d",factorial);
    return 0;

}
int fact(int x){
    int factorial;
    if(x==1||x==0){
        factorial=1;
        return(factorial);
    }
    else{
        factorial=x*fact(x-1);
        return(factorial);
    }
}