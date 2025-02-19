#include<iostream>
using namespace std;
class c1{
    public:
    int largest(int *y){
        int i,l;
        for(i=0,l=*y;i<10;i++){
            if(*(y+i)>=l){
                l=*(y+i);
            }
        }
        return(l);
    } 

};
int main(){
    int x[10],i,largest;
    for(i=0;i<10;i++){
        if(i==0){
        cout<<"enter nmbr for array";
        }
        cin>>x[i];
    }
        c1 P;
        largest=P.largest(x);
        cout<<"largest in the array="<<largest;

}