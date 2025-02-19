#include<stdio.h>
int main(){
    char c;
    FILE *ptr,*ctr;
    ptr=fopen("copying_frm.txt","r");
    ctr=fopen("pasting_in.txt","w");
    while(c!=EOF){
        c=fgetc(ptr);
                if(c==EOF){
            break;
        }
        fputc(c,ctr);
    }
    fclose(ctr);
    fclose(ptr);
    return 0;
}