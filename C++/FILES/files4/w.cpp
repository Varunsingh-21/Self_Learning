#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;
// int numofchoices=0;
class c1{   
    private:
    int id;
    char name[20];
    char password[40];
    public:
    void wr(c1 &P){
        cout<<"1";
        cin>>id;
                cout<<"1";
                cin>>name;
                        cout<<"1";
                        cin>>password;
    fstream f;
    f.open("records.txt",ios::out);
    f.write((char*)&P,sizeof(P));
    f.close();
    }
};

int main(){
    c1 P;
    P.wr(P);
}