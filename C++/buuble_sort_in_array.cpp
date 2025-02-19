#include<iostream>
using namespace std;
class c1{
    public:
    void bubblesort(){
        int x[5],i,j,k,temp;
        for(i=0;i<5;i++){
            if(i==0){
                cout<<"enter 5 members for array";
            }
            cin>>x[i];
        }
        for(j=4;j>=1;j--){
            for(k=1;k<=j;k++){
                if(x[k-1]<x[k]){
                    temp=x[k-1];
                    x[k-1]=x[k];
                    x[k]=temp;
                }
            }
        }
        i=0;
        for(i=0;i<5;i++){
            cout<<x[i]<<" ";
        }
    }
};
int main(){
    c1 P;
    P.bubblesort();
}