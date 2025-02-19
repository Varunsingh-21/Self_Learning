#include<iostream>
using namespace std;
class c1{
private:
int numbers[5];
int i;
public:
c1(){
    i=0;
}
~c1(){
    cout<<"memory deallocated";
}
void input(){
    for(i=0;i<5;i++){
        cout<<"enter value no : "<<i+1<<endl;
        cin>>numbers[i];
    }
}
void consec_check(){
    for(i=0;i<5;i++){
        if(i!=4){
        if(numbers[i]==(numbers[i+1]-1)){
            cout<<"value no "<<i+1<<" and "<<i+2<<" are consecutive"<<endl;
        }
        }
    }
}

};
int main(){
    c1 P;
    P.input();
    P.consec_check();
}