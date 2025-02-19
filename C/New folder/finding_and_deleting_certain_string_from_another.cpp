#include<stdio.h>
#include<string.h>

int main(){
    char ls[30]={"hello mate how are you"};
    char ss[10]={"mate"};
    char ns[20];
    int i=0,j=1,k=0,lenght_ss,m,p,limit,a=0;
    lenght_ss=strlen(ss);
    printf("%d \n",lenght_ss);

    while(ls[i]!='\0'){
        if(ss[0]==ls[i]){
            
        for(j=0;j<lenght_ss;j++){

        if(ss[j]==ls[i]){
            k++;
        }
        else{
            k=0;
            break;
        }
        if(k==lenght_ss){
            printf("MATCH FOUND");
            printf(" \n %d",i);
            p=i;
            limit=i-lenght_ss;
            m=1;
        }
        i++;

        }
    }
    i++;
    }
    if(m!=1){
        printf("NO MATCH FOUND");
    }
    strcpy(ns,ls);
    k=0;
    while(ns[k]!='\0'){
        if(k>=limit && k<=p){
            k++;
            continue;
        }
        else{
            ls[a]=ns[k];
            a++;
            k++;

        }
    }
    ls[a]='\0';
    printf("\n %s",ls);

    return 0;
}