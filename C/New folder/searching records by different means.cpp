#include<stdio.h>
#include<string.h>
struct student{
    int student_id;
    char name[20];
    int age;
    char adress[200];
};

int main(){
    struct student S[5]={{123,"meetali",18,"rampura"},{124,"varun",19,"maur"},{125,"karan",17,"maur"},{126,"varun",17,"bathinda"},{127,"vivek",17,"mansa"}},F;
    int i,t=0,c,m=0;
    printf("Enter 1 to search by student id \nEnter 2 to search by name \nEnter 3 to search by age");
    scanf("%d",&c);
    switch(c){
        case 1:
        printf("enter student id to search");
        scanf("%d",&F.student_id);
        for(i=0;i<5;i++){
        if(F.student_id == S[i].student_id){
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
        case 2:  printf("enter student name to search");
                 scanf("%s",&F.name);
                 for(i=0;i<5;i++){
                      if(strcmp(S[i].name,F.name)==0){
                          printf("%d %s %d %s \n",S[i].student_id,S[i].name,S[i].age,S[i].adress);
                          m++;
                      }
                 }
                 if(m==0){
                     printf("NO RECORD FOUND");
                 }
        case 3: printf("Enter student age to search");
                scanf("%d",&F.age);
                int a=0;
                 for(i=0;i<5;i++){
                     if(S[i].age==F.age){
                          printf("%d %s %d %s \n",S[i].student_id,S[i].name,S[i].age,S[i].adress);
                          m++;  
                     }
                 }
                 if(m==0){
                     printf("NO RECORD FOUND");
                 }

    }
    return 0;
}