#include<stdio.h>
int main(){
    int x[10]={4,14,1,14,3,8,5,3,9,0};
    int i,sl,l,j,flag=0;;

    for(i=0,l=x[0];i<10;i++){
        if(x[i]>=l){
            l=x[i];
        }

    }
    printf("%d \n",l);
    for(i=0,sl=x[0];i<10;i++){
               if(flag==0){
               for(j=0;j<10;j++){
                   if(x[j]!=l){
                       sl=x[j];
                       flag=1;
                       break;  
                   }
               }
               }
               if(x[i]>=sl && x[i]!=l){
            sl=x[i];
        }
    }
    printf("%d",sl);


}