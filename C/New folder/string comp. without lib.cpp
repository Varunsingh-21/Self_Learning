#include<stdio.h>

int main(){
    int i=0,j=0;
    char x[20]="hello";
    char y[19]="hello";
    while(x[i]!='\0'){
        i++;
    }
    while(y[j]!='\0'){
        j++;
    }

    if(i==j){ 
        for(i=0;i<j;i++){
        if(x[i]!=y[i]){
            break;
        }
    }
    if(i==j){
        printf("compared");
    }
    else{
        printf("not compared");
    }


    }
    else{
        printf("not compared");
    }


    return 0;
}