#include<stdio.h>
union c1{
    int x;
    float y;
    char z;};
int main(){
    union c1 h;
    h.x=10;
    h.y=40.44;
    h.z='t';
    printf("%d %0.2f %c",h.x,h.y,h.z);
    //value of x will come out to be garbage as h.y will overwrite h.x as value are always written frm left to right in memory ... fr small values memory adjusts itself sometime 
    return 0;
}