#include<stdio.h>
int main(){
    FILE *nm1,*nm2;
    int x,y;
    nm1=fopen("number_1.txt","r");
    nm2=fopen("number_2.txt","r");
    fscanf(nm1,"%d",&x);
    fscanf(nm2,"%d",&y);
    fclose(nm1);
    fclose(nm2);
    printf("%d",x+y);

}