#include<stdio.h>
struct student{
    char name[20];
    int age;
    char adress[200];
};

int main(){
    struct student S[5];
    int i;
    for(i=0;i<5;i++){
        printf("enter name ,age and adress");
        scanf("%s%d%s",&S[i].name,&S[i].age,&S[i].adress);
    }
    for(i=0;i<5;i++){
        printf("%s %d %s \n",S[i].name,S[i].age,S[i].adress);
    }
    
    return 0;
}