#include<iostream>
using namespace std;

//methd 2 is putting the digits of nmbr in a string thn using string reverse And string compare
class c1{
    protected:
    int n;
    public:
    c1(){
        n=0;
    }
    void input(){
        cout<<"enter n"<<endl;
        cin>>n;
    }
    virtual void palen_check()=0;

};
class c2:public c1{
    public:
    void palen_check(){
        int i=0,temp=0,d=0,sum=0;
        for(i=0;i<=n;i++){
            temp=i;
            while(temp>0){
                d=temp%10;
                sum=d+(sum*10);
                temp=temp/10;
            }
            if(sum==i){
                cout<<i<<" ";
            }
        }
    }
};
int main(){
    c2 P;
    P.input();
    P.palen_check();
}