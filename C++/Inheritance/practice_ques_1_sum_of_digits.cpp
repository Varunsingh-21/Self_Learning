#include<iostream>
using namespace std;
class c1{
    protected:
    int sum;
    int n,d;
    public:
    int digitsum(){
        cout<<"enter n"<<endl;
        cin>>n;
        while(n>0){
            d=n%10;
            sum=sum+d;
            n=n/10;
        }
    return (sum);
    }
    c1(){
        n=0;
        d=0;
        sum=0;
    }
    ~c1(){
        cout<<"memory deallocated"<<endl;
    }
};
class c2:public c1{
public:
void resum(){

 while(1){       
    if(sum>10){

            n=sum;
            d=0;
            sum=0;

        while(n>0){
            d=n%10;
            sum=sum+d;
            n=n/10;

    }

    }
        else{
            cout<<"sum="<<sum<<endl;
            break;
        }
    }
    }
};
int main(){
    int revert=0,sum=0;
    c2 P;
    sum=P.digitsum();
    if(sum>10){
        P.resum();
    }
}