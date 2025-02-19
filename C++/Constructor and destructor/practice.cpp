#include<stdio.h>

int main(){
    char password[20];
    char symbols[12]={'!','@','#','%','^','&','*','(',')'};
    char lalpha[5]={'a','b','c'};
    char ualpha[5]={'A','B','C'};
    printf("enter password");
    scanf("%s",password);
    int i=0,j=0,flag=0,count=0;
    while(password[i]!='\0'){

        for(j=0;j<9;j++){

        if(password[i]==symbols[j]){
            count++;
            flag=1;
            break;
        }
        }
        if(flag==1){
            break;
        }
        i++;
    }
    i=0;
    flag=0;
    while(password[i]!='\0'){
        for(j=0;j<3;j++){
        if(password[i]==lalpha[j]){
            count++;
            flag=1;
            break;
        }
        }
        if(flag==1){
            break;
        }
        i++;
    }
    i=0;
    flag=0;
    while(password[i]!='\0'){

        for(j=0;j<3;j++){
        if(password[i]==ualpha[j]){
            count++;
            flag=1;
            break;
        }
        }
        if(flag==1){
            break;
        }
        i++;
        
    }
    if(count==3){
        printf("VALIDATED");
    }
    else{
        printf("MISSING CREDENTIALS");
    }

}