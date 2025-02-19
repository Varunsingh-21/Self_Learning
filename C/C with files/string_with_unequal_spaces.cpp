#include<stdio.h>

int main(){
    char s[50];
    printf("enter the string in which correction is needed");
    gets(s);
    printf("%s",s);
    char ns[50];
    int i,j=0,m=0;
    while(s[i]!='\0'){
        if(s[i]==' '){
            m++;
        }
        else{
            m=0;
        }
        if(m==0||m==1){
            ns[j]=s[i];
            j++;
        }
        i++;

    }
    ns[j]='\0';
    printf("\n %s",ns);
    return 0;
} 