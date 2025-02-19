#include<iostream>
using namespace std;
class c1{
    private:
    int prime_nums[100];
    int j,t;
    public:
    c1(){
        j=0;
        t=0;
    }
    ~c1(){
        cout<<"memory deallocated"<<endl;
    }
    int check_prime(int number){
        t=0;
        if(number==2){
            return 1;
        }
        else{

        for(int i=2;i<number;i++){
            if(number%i==0){
                t=1;
                break;
            }
        }
        if(t==1){
            // cout<<"dgdg0";
            return 0;
        }
        else{
            return 1;
        }

    }
    }




    void num_check(){
        int result,n;
        cout<<"enter n"<<endl;
        cin>>n;
        for(int i=2;i<=n;i++){
            result=check_prime(i);
            if(result==1){
                prime_nums[j]=i;
                j++;
            }
        }
    }

    void sum_prime_check(){
         int sump=0,revert=0,l=0;
        for(int i=0;i<(j-1);i++){

            sump=prime_nums[i]+prime_nums[i+1];
            revert=check_prime(sump);
            if(revert==1){
                cout<<"sum of "<<prime_nums[i]<<" and "<<prime_nums[i+1]<<" is prime and is "<<sump<<endl;
            }
            sump=0;
            revert=0;

        }
        // for(l=0;l<j;l++){
        //     cout<<prime_nums[l]<<endl;
        // }
    }
};
int main(){
    c1 P;
    P.num_check();
   P.sum_prime_check();
}