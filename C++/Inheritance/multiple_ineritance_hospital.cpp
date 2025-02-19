#include<iostream>
#include<string.h>
using namespace std;
class hospital{
    protected:
    char hname[20];
    char speciality[30];
    int hsalary;
    char location[20];
    private:
    void salarychng(){
        cout<<"enter new universal salary"<<endl;
        cin>>hsalary;
    }
    public:
    hospital(){
        strcpy(hname,"max hospital");
        strcpy(speciality,"heart diseases");
        hsalary=20000;
        strcpy(location,"bathinda");
    }
    ~hospital(){
        cout<<"hospital destructed"<<endl;
    }
};
class doctor1:public hospital{
    private:
    int special_allowence;
    int salary;

    protected:
    char docname[20];
    char dspeciality[20];

    doctor1(){
        strcpy(docname,"mr.grover");
        strcpy(dspeciality,"surgeon");
        special_allowence=1000;
        salary=hsalary+special_allowence;
    }
    ~doctor1(){
        cout<<"doctr1 des"<<endl;
    }
};
class patient:public doctor1{
    public:
    int lc=500,me=300,operation=1000,total=0,c;
    char pname[20];
    char doctor_attending[20];

    void credentials(){
        cout<<"enter patient name"<<endl;
        cin>>pname;
        cout<<"doc attenting";
        cin>>doctor_attending;
    }
    void charges(){
        cout<<"enter 1 if got operated"<<endl;
        cin>>c;

        if(c==1){
            total=lc+me+operation;
            cout<<"total charges="<<total<<endl;
        }
        else{
            cout<<"total charges="<<lc+me<<endl;
        }
    }
};
int main(){
    patient P;
    P.credentials();
    P.charges();
}