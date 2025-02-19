#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    printf("enter sides of a valid triangle \n");
    printf("enter a,,b,c");
    scanf("%f%f%f",&a,&b,&c);

    if(a==b && b==c){
        printf("equilateral triangle");
    }
    else{
        if(a!=b && b==c){
            if(a==sqrt((b*b)+(c*c))){
                printf("right angled isoscales");
            }
            else{
                printf("isoscales");
            }
        }
    
        else{
            if(b!=c && a==b){
                if(c==sqrt((a*a)+(b*b))){
                    printf("isoscales right angled");
                }
                else{
                    printf("isocles");
                }
            }
            else{
                if(a>b && a>c){
                    if(a==sqrt((b*b)+(c*c))){
                        printf("right angled");
                    }
                    else{
                        printf("scalene");
                    }
                }
                else{
                    if(b>a && b>c){
                        if(b==sqrt((a*a)+(c*c))){
                            if(a==c){
                                printf("isocles ryt angled");
                            }
                            else{
                            printf("right angled");
                            }
                        }
                    
                        else{
                            printf("scalene");
                        }
                    }
                    else{
                        if(c==sqrt((b*b)+(a*a))){
                            printf("right anggled");
                        }
                        else{
                            printf("scalene");
                        }
                    }

                }
            }
        }
    }
}
