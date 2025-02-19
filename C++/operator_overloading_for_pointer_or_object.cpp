#include<iostream>
#include<string.h>
using namespace std;
class c1{
    private:
    char name[20];
    int age;
    char adress[40];
    public:
    int index=0;
    void show(){
        cout<<name<<" "<<age<<" "<<adress<<endl;   
    }
    int operator ++(){
        index++;
        return(index);
    }
    void input(){
        cout<<"enter name"<<endl;
        cin>>name;
        cout<<"enter age"<<endl;
        cin>>age;
        cout<<"enter adress"<<endl;
        cin>>adress;
    }
};
int main(){
    int t=0;
    c1 P[5];
    P[t].input();
    P[1].input();
    P[t].show();
    t=++P[t];
    P[t].show();
    
}