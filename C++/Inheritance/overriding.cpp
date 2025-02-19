#include<iostream>
using namespace std;
class c1{
    private:
    int x,y,z;
    public:
    void calculate(){
        cout<<"enter x and y";
        cin>>x>>y;
        z=x+y;
        cout<<"sum="<<z;
    }
};
class c2:public c1{
    private:
    int a,b,c;
    public:
    void calculate(){
        cout<<"enter a and b";
        cin>>a>>b;
        c=a-b;
        cout<<"subtr="<<c;
    }
};
int main(){
    c2 P;
    P.c1::calculate();
    return 0;
}