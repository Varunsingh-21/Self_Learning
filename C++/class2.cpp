#include<iostream>
using namespace std;
class alternateplusminus{
    public:
    void calculate(){
    int n,i,sum=0;
    cout<<"enter n";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2==0){
            sum=sum-i;
        }
        else{
            sum=sum+i;
        }
    }
    cout<<"sum="<<sum;
    }
};
int main(){
    alternateplusminus P;
    P.calculate();
}