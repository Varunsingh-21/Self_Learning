#include<stdio.h>
#include<string.h>

struct c1{
    char name[20];
    char adress[100];
};

int main(){
    int nearby[5];
    char temp[100];
    int i,j=0,k,i2=0,trying_to_mtch=0,length,match=0,matches_in_total=0;
    struct c1 P[5]={{"varun","meur,punjab"},{"meet","maur,india"},{"karan","pakistan"},{"shiv","india,maur"},{"vivek","ludhiana,punjab"}};
    for(i=0;i<5;i++){
        length=strlen(P[i].adress);
        // printf("%d\n",length);
        strcpy(temp,P[i].adress);
        // printf("%s\n",temp);
        for( trying_to_mtch=0 ; trying_to_mtch < 5 ; trying_to_mtch++){
            
                while(temp[j]!='\0'){

                while(P[trying_to_mtch].adress[i2]!='\0'){
                if(temp[j]==P[trying_to_mtch].adress[i2]){
                    match++;
                    i2=0;
                    break;
                    
                }
                i2++;
            }
            i2=0;
            j++;
            }
            
            j=0;
            // printf("temp loop broken\n");
            // printf("%d\n",match);
            if(match*100/length>=50 && match*100/length <100){
                // printf("entered if\n");
                matches_in_total++;
                if(matches_in_total==1){
                printf("PEOPLE LIVING NEARBY  %s %s MAYBE ARE:\n",P[i].name,P[i].adress);
                }
                printf("%s %s\n",P[trying_to_mtch].name,P[trying_to_mtch].adress);
            }
            match=0;
    }
    printf("\n\n\n");
    matches_in_total=0;

}
}
