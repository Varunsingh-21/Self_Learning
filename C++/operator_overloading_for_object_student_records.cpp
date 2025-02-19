#include<iostream>
#include<string.h>
using namespace std;
class c1{
    private:
    char name[5][20];
    int age[5];
    char adress[5][40];
    int index;
    public:
    c1(){
        index=0;
        strcpy (name[0],"varun");
        strcpy (name[1],"karan");
        strcpy (name[2],"nurav");
        strcpy (name[3],"harry");
        strcpy (name[4],"anmol");
        strcpy(adress[0],"maur");
        strcpy(adress[1],"rampura");
        strcpy(adress[2],"bathinda");
        strcpy(adress[3],"barnala");
        strcpy(adress[4],"mansa");
        age[0]=21;
        age[1]=22;
        age[2]=33;
        age[3]=42;
        age[4]=41;
    }
    ~c1(){
        cout<<" destructed"<<endl;
    }
    void operator ++(){
        index++;
    }
    void show(){
        cout<<name[index]<<" "<<age[index]<<" "<<adress[index]<<endl;
    }
};
int main(){
    c1 P;
    P.show();
    ++P;
    P.show();
}