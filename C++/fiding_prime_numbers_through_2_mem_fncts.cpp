#include<iostream>
using namespace std;
class c1{
    public:
    int check_prime(int number){
        int i,t=0;
        if(number==2){
            return 1;
        }
        else{

        for(i=2;i<number;i++){
            if(number%i==0){
                t=1;
                break;
            }
        }
        if(t==1){
            return 0;
        }
        else{
            return 1;
        }

    }
    }
 
    void num_check(){
        int i,result;
        for(i=2;i<=500;i++){
            result=check_prime(i);
            if(result==1){
                if(i==499){
                    printf("%d",i);
                }
                else{
                printf("%d,",i);
                }
            }
        }
    }
};
int main(){
    c1 P;
    P.num_check();
}