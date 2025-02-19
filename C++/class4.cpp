#include<iostream>
using namespace std;
class c1 {
    public:
        void dtob(int n){
        if(n>0){
        int y=n%2;
        n=n/2;
        dtob(n);
        cout<<y;
    }
    }
};
int main(){
    int a;
    c1 P;
    cout<<"Enter the number";
    cin>>a;
    P.dtob(a);
}