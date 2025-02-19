#include<iostream>
using namespace std;
class c1{
    private:
    int sum,n,i;
    public:
    c1(){
        sum=0;
        n=0;
        i=1;
    }
    ~c1(){
        cout<<"dealocated";
    }
    void get(){
        cout<<"enter n";
        cin>>n;
    }
    void add(){
        for(i=1;i<=n;i++){
            sum=sum+i;
        }
        cout<<"sum="<<sum;
    }
};
int main(){
    c1 *P;
    P=new c1();
    P->get();
    P->add();
    delete(P);
}