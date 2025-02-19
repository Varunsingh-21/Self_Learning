#include<stdio.h>
#include<string.h>
struct c1{
    char name[20];
    int age;
    char adress[200];
};
int main(){   FILE *ctr;
    struct c1 F,R;
    int i=0;
    printf("enter name,age,adress");
    scanf("%s%d%s",&F.name,&F.age,&F.adress);
    ctr=fopen("data.txt","r");
    while (fread(&R,sizeof(R),1,ctr)!=EOF)
    {
        if(strcmp(F.name,R.name)==0 || F.age==R.age || strcmp(F.adress,R.adress)==0){
            i++;
                if(i==1){
                    printf("SIMILAR RECORDS : \n");
                }
            printf("%s %d %s \n",R.name,R.age,R.adress);
        }

    }
    fclose(ctr);
            if(i==0){
            printf("NO RECORDS FOUND");
        }
    

    
    return 0;
}