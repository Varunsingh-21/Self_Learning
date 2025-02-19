#include<iostream>
#include<string.h>
using namespace std;
class student{
    private:
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
        cout<<"name="<<name<<endl;
        cout<<"age="<<age<<endl;
        cout<<"adress="<<adress<<endl;
    }
    int find(char to_match_with[20]){
        if(strcmp(name,to_match_with)==0){
            return 1;
        }
        else{
            return 0;
        }
    }
};

int main(){
    student S[5],F;
    int i,result;
    char to_match[20];
    for(i=0;i<5;i++){
        S[i].input();
    }
    cout<<"Enter name to find"<<endl;
    cin>>to_match;
    for(i=0;i<5;i++){
        result=S[i].find(to_match);
        if(result==1){
            cout<<"SIMILAR RECORD FOUND"<<endl;
            S[i].output();
            break;
        }
    }
    return 0;
}