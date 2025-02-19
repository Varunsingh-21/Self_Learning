#include<iostream>
using namespace std;
class c1{
    private:
    int x,y,n;
    public:
    void input(){
        cout<<"enter n";
        cin>>n;
    }
    friend void generateseries(c1 P);
};
void generateseries(c1 P){
    int i;
    for(i=1;i<P.n;i++){
        int j=i;
        int sum=0;
        while(j>=0){
            int y=j%10;
            sum=sum+y*y*y;
            j=j/10;
        }
        if(sum==i){
            cout<<i;
        }
    }
}
void main(){
    c1 P;
    P.input();
    generateseries(P);
}
