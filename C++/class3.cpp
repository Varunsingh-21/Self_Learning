#include<iostream>
using namespace std;
class c1{
    public:
    int d;
    void determinent(int a,int b,int c){
        d=(b*b)-(4*a*c);
        if(d<0){
            cout<<"NEGATIVE DETERMINENT";
        }
        else{
            if(d>0){
                cout<<"POSITIVE D";
            }
            else{
                cout<<"ZERO";
            }
        }
    }
};
int main(){
    int cx2,cx,c;
    c1 P;
    cout<<"enter coefficient of (x)square"<<endl;
    cin>>cx2;
    cout<<"enter coefficent of x"<<endl;
    cin>>cx;
    cout<<"enter constant term"<<endl;
    cin>>c;
    P.determinent(cx2,cx,c);
}