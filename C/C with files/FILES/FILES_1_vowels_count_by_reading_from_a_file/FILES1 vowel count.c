#include<stdio.h>
int main(){
    char c;
    int f=0;
    FILE *ptr;
    ptr=fopen("character.txt","r");
    while(c!=EOF){
        c=fgetc(ptr);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            f++;
        }
    }
    printf("%d",f);
    fclose(ptr);
    return 0;
}