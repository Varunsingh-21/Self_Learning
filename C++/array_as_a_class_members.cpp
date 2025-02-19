#include<iostream>
using namespace std;
class student{
    char name[20];
    int age;
    char adress[40];   
    public:
    void input(){
        cout<<"enter name"<<endl;
        cin>>name;
        cout<<"enter age"<<endl;
        cin>>age;
        cout<<"enter adress"<<endl;
        cin>>adress;
    }
    void output(){
        cout<<"name="<<name;
        cout<<"age="<<age;
        cout<<"adress="<<adress;
    }
};
void main(){
    student S[5];
    int i;
    for(i=0;i<5;i++){
        S[i].input();
    }
    for(i=0;i<5;i++){
        S[i].output;
    }
}