#include<stdio.h>
struct c1{
    char name[20];
    int age;
    char adress[200];
};
int main(){
    FILE *ptr;
    int i;
    struct c1 D[5]={{"varun",18,"maur"},{"meet",16,"rampura"},{"karan",13,"chd"},{"robin",19,"bti"},{"lavi",10,"jalndhr"}};
    ptr=fopen("data.txt","w");
    for(i=0;i<5;i++){
        printf("%s %d %s \n",D[i].name,D[i].age,D[i].adress);
        fwrite(&D[i],sizeof(D[i]),1,ptr);
    }
    fclose(ptr);

    return 0;
}