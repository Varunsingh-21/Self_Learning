#include<iostream>
using namespace std;
class c1{
    private:
    int n,sum,i;
    public:
    c1(){
        n=0;
        sum=5;
        i=7;
    }
    c1(int a){
        n=a;
        sum=0;
        i=1;
    }
    ~c1(){
        cout<<"memory dealoctaed";
    }
    void get(){
        cout<<"enter n";
        cin>>n;
    }
    void add(){
        for(i=1;i<=n;i++){
            sum=sum+i;
        }
        cout<<"sum="<<sum<<endl;
    }
};
int main(){
    c1 K;
    // K.get();
    K.add();
    c1 P(1);
    P.get();
    P.add();
    return 0;
}