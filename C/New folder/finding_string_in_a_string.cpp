#include<stdio.h>
#include<string.h>

int main(){
    char ls[30]={"hello a k how are you"};
    char ss[10]={"how"};
    int i=0,j=1,k=0,lenght_ss,m;
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
        if(k==lenght_ss-1){
            printf("MATCH FOUND");
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
    return 0;
}