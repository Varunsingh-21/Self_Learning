#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
using namespace std;
class c1{
    private:
    int st_id;
    char name[20];
    int age;
    char fathers_name[20];
    char course_name[30];
    public:
    void input(){
        cout<<"enter st id"<<endl;
        cin>>st_id;
        // cin.flush;
        fflush(stdin);
        cout<<"enter name"<<endl;
        gets(name);
        cout<<"enter age"<<endl;
        cin>>age;
        fflush(stdin);
        cout<<"enter f name"<<endl;
        gets(fathers_name);
        fflush(stdin);
        cout<<"enter course name"<<endl;
        gets(course_name);
    }
    void search(){

    }
};
int main(){ 
    c1 S[5];
    S[0].input();
    S[1].input();
    S[2].input();
    S[3].input();
    S[4].input();

    int i=0;
    ofstream f;
    f.open("records1.txt",ios::out);
    for(i=0;i<5;i++){
        f.write((char*)&S[i],sizeof(S[i]));
    }
    f.close();

}