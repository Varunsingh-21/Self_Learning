#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int age;
    char adress[200];
};

int main(){
    struct student S[5]={{"meetali",18,"rampura"},{"varun",19,"maur"},{"karan",17,"maur"},{"nurav",17,"bathinda"},{"vivek",17,"mansa"}},F;
    int i,t=0;
        printf("enter name to search");
        scanf("%s",&F.name);
        for(i=0;i<5;i++){
        if(strcmp(F.name,S[i].name)==0){
            printf("Record Found \n");
            break;
        }
        else{
            t++;
        }
        }
        if(t==i&&i==5){
            printf("Record not found");
        }
        else{
            printf("Matching record = %s %d %s",S[i].name,S[i].age,S[i].adress);
        }
    
    return 0;
}