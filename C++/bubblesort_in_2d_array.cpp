#include<iostream>
using namespace std;
class c1{
    public:
    void bubblesort_in_2d_array(){
        int x[5][4],i,j,k,l,q,temp;
        for(i=0;i<5;i++){
            for(l=0;l<4;l++){
                if(l==0){
                    cout<<"enter values for row no."<<i+1;
                }
                cin>>x[i][l];

            }
        }
    for(q=0;q<5;q++){
        for(j=3;j>=1;j--){
            for(k=1;k<=j;k++){
                if(x[q][k-1]<x[q][k]){
                    temp=x[q][k-1];
                    x[q][k-1]=x[q][k];
                    x[q][k]=temp;
                }
            }
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }



    }
};
int main(){
    c1 P;
    P.bubblesort_in_2d_array();
}