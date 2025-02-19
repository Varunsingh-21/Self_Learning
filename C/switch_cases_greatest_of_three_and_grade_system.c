#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    switch(n)
    {
    case 1: 
    int x,y,z;
    printf("enter x,y,z");
    scanf("%d%d%d",&x,&y,&z);
    x>y?x>z?printf("x is largest"):printf("z is largest"):y>z?printf("y is largest"):printf("z is largest");
    break;

    case 2: 
    int m,s,e,h,p,pr;
    printf("enter marks in m,s,e,h,p");
    scanf("%d%d%d%d%d",&m,&s,&e,&h,&p);
    pr=(m+s+e+h+p)*100/500;
    if(pr>=90){
        printf("Grade = A+");
    }
    else{
        if(pr>=80 && pr<90){
            printf("Grade = A");
        }
        else{
            if(pr>=70 && pr<80){
                printf("Grade = B");
            }
            else{
                if(pr>=60 && pr<70){
                    printf("Grade = C");
                }
                else{
                    if(pr>=50 && pr<60){
                        printf("Grade = D");
                    }
                    else{
                        printf("FAIL");
                    }
                }
            }
        }
    }
    break;
    }
}