#include<iostream>
#include<math.h>
using namespace std;
class c1{
    private:
    int till;
    public:
    void input(){
        cout<<"enter ending point";
        cin>>till;
    }
    friend void generateseries(c1 p);
};
void generateseries(c1 p){
    for(int i=1;i<=p.till;i++){
        int d,n,n2,n3,nd=0,sum=0,j=0;
        n=i;
        n2=n;
        while(n>0){
            n=n/10;
            nd++;
        }
        while(j!=nd){
            d=n2%10;
            sum=sum+(int)pow(d,nd);
            n2=n2/10;
            j++;
        }
        if(sum==i){
            cout<<i<<" ";
        }
    }
}
int main(){
    c1 p;
    p.input();
    generateseries(p);
}