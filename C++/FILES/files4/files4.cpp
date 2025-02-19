#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;
int choices[3];
int flag2=0;
class c1{   
    private:
    int id;
    char name[20];
    char password[40];
    public:
    
    void idchoice(c1 &P){
        int nid=0;
        int nocs=0;
        int flg1=0;
        ifstream f;
        while(1){
        if(nocs==3){
            break;
        }
        flg1=0;
        f.open("records.txt",ios::in);
        f.read((char*)&P,sizeof(P));
        while(!f.eof()){
            if(id==nid){
                flg1=1;
                break;
            }
            f.read((char*)&P,sizeof(P));
        }
        if(flg1==0){
            choices[nocs]=nid;
            nocs++;
        }
        f.close();
        nid++;
        }
    }
    void id_auth(c1 &P){
        int id1=-1;
        char pass[20];
        int flag=-11;
        cout<<"enter ur acc id"<<endl;
        cin>>id1;
        cout<<"enter ur acc password"<<endl;
        cin>>pass;
        {fstream f;
        f.open("records.txt",ios::in);
        f.read((char*)&P,sizeof(P));
        while(!f.eof()){
            if(id1==id && (strcmp(pass,password)==0)){
                cout<<"Match Found"<<endl;
                flag=1;
            }
        }
        f.close();
        }
        if(flag!=1){
            cout<<"No Match Found"<<endl;
        }
    }
    int signup(int idt,c1 &R){
        int index=0;
        id=idt;
        int temp=-10;
        int flag=0;
        cout<<"enter ur name"<<endl;
        cin>>name;
        cout<<"create a password"<<endl;
        cin>>password;
        ifstream f3;
        f3.open("records.txt",ios::in);
        f3.seekg(0,ios::end);
        if(f3.tellg()==0){
            flag2=1;
            f3.close();
            return(index);
        }
        f3.seekg(0,ios::beg);
        f3.read((char*)&R,sizeof(R));
        while(!f3.eof()){
            if(R.id<id){
                index++;
            }
            else{
                break;
            }
        f3.read((char*)&R,sizeof(R));
        }
        f3.close();
        return(index);

    }
    void output(){
        cout<<id<<" "<<name<<endl;
    }

};
int main(){
    int cl,ind;
    c1 P;
    c1 R;
    cout<<"enter 0 to login"<<endl;
    cout<<"enter 1 to signup"<<endl;
    cout<<"3 to display data in file"<<endl;
    cin>>cl;
    if(cl==0){
        P.id_auth(P);
    }
    else{
        if(cl==1){
        int choice=-1;
        cout<<"select ur acc id"<<endl;
        P.idchoice(P);
        for(int i=0;i<3;i++){
            cout<<choices[i]<<" ";
        }
        cout<<endl;
        cout<<"enter 0 to choose the 1st option"<<endl;
        cout<<"enter 1 to choose the 2nd option"<<endl;
        cout<<"enter 2 to choose the 3rd option"<<endl;
        cin>>choice;
        ind=P.signup(choices[choice],R);
        // cout<<ind<<endl;
        if(flag2==1){
            ofstream f10;
            f10.open("records.txt",ios::out);
            f10.write((char*)&P,sizeof(P));
            f10.close();
            exit(0);
        }
        else{
            fstream f;
            fstream f2;
            int obs=0;
            f.open("records.txt",ios::in);
            f2.open("recordsc.txt",ios::out);
            f.read((char*)&R,sizeof(R));
            if(obs==ind){
                f2.write((char*)&P,sizeof(P));
            }
            while(!f.eof()){
                f2.write((char*)&R,sizeof(R));
                obs++;
                f.read((char*)&R,sizeof(R));
                if(obs==ind){
                    f2.write((char*)&P,sizeof(P));
                }
            }
            f.close();
            f2.close();

            fstream f11;
            fstream f12;
            f11.open("recordsc.txt",ios::in);
            f12.open("records.txt",ios::out);
            f11.read((char*)&R,sizeof(R));
            while(!f11.eof()){
                f12.write((char*)&R,sizeof(R));
                f11.read((char*)&R,sizeof(R));
            }
            f11.close();
            f12.close();
        }
        //////////////////////////////////////////////////////////////////
        }
        else{
                if(cl==3){
        ifstream f2;
        f2.open("records.txt",ios::in);
        f2.seekg(0,ios::beg);
        f2.read((char*)&R,sizeof(R));
        while(!f2.eof()){
            R.output();
            f2.read((char*)&R,sizeof(R));

        }
    }
    else{
            cout<<"WRONG INPUT";
            exit(0);
    }
        }
    }

}