#include<stdio.h>
struct c1{
    int x;
    float y;
};
//semicoln is necessary 

int main(){
    struct c1 P;
    //P is called object
    P.x=10;
    P.y=40.10;
    printf("x=%d , y=%0.2f",P.x,P.y);
    
    return 0;
}