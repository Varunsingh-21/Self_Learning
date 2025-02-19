#include<stdio.h>
int main(){
        FILE *ptr,*ctr;
        int y[20]={14,7,9,4,3,8,5,3,9,0,8,13,12,10,11,12,11,10,9,12};
        int i,l,sl;
        int x[20];
        ptr=fopen("data.txt","w");
        fwrite(y,sizeof(y),1,ptr);
        fclose(ptr);

        ctr=fopen("data.txt","r");
        fread(x,sizeof(x),1,ctr);
        for(i=0;i<20;i++)
        {
           printf(" %d",x[i]);
        }
   
        fclose(ctr);    
        
        for(i=0,l=x[0];i<20;i++){
        if(x[i]>=l){
            l=x[i];
        }

    }
    printf("\n %d \n",l);
    for(i=0,sl=x[0];i<20;i++){
               if(sl==l){

                 sl=x[1];
                  }
               if(x[i]>=sl){
            sl=x[i];
        }
    }
    printf("%d",sl);


}
