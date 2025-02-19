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
    for(i=0;i<5;i++){
        printf("%s %d %s \n",S[i].name,S[i].age,S[i].adress);
    }
        printf("enter name ,age and adress to search");
        scanf("%s%d%s",&F.name,&F.age,&F.adress);
        for(i=0;i<5;i++){
        if(strcmp(F.name,S[i].name)==0 && F.age==S[i].age && strcmp(F.adress,S[i].adress)==0){
            printf("Record Found");
            break;
        }
        else{
            t++;
        }
        }
        if(t==i&&i==5){
            printf(" record not found");
        }
    
    return 0;
}