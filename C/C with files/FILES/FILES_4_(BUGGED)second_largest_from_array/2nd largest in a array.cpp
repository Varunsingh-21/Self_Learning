#include<stdio.h>
int main(){
    int x[10]={14,7,9,4,3,8,5,3,9,0};
    int i,sl,l;

    for(i=0,l=x[0];i<10;i++){
        if(x[i]>=l){
            l=x[i];
        }

    }
    printf("%d \n",l);
    for(i=0,sl=x[0];i<10;i++){
               if(sl==l){

                 sl=x[1];
                  }
               if(x[i]>=sl){
            sl=x[i];
        }
    }
    printf("%d",sl);


}