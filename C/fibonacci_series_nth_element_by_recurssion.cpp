#include<stdio.h>
int nth_fibonacci(int);

int main(){
    int n,result;
    printf("enter element to find");
    scanf("%d",&n);
    result=nth_fibonacci(n);
    printf("%d",result);
    
    return 0;
}
int nth_fibonacci(int n){
    int element;
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    else{
        element=nth_fibonacci(n-1)+nth_fibonacci(n-2);
        return (element);
    }
}