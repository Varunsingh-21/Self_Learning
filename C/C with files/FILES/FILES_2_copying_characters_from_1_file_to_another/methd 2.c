#include<stdio.h>
int main(){
    char c;
    FILE *ptr,*ctr;
    ptr=fopen("copying_frm.txt","r");
    ctr=fopen("pasting_in.txt","w");
    while((c=fgetc(ptr))!=EOF){
        //cant write c=fgetc again becoz it will make compiler skip one character
        // if(c==EOF){
        //     break;
        // }
        fputc(c,ctr);
    }
    fclose(ctr);
    fclose(ptr);
    return 0;
}