#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int i;
class c2{
    private:
    int st_id;
    char name[20];
    int age;
    char fathers_name[20];
    char course_name[30];

    public:

    void output(){
        cout<<st_id<<" "<<name<<" "<<age<<" "<<fathers_name<<" "<<course_name<<endl;
    }

    int search(c2 &R){
    int s_id;
    int action=0;
    cout<<"enter the id of student u want to search"<<endl;
    cin>>s_id;
    ifstream f2;
    f2.open("records1.txt",ios::in);
    for(i=1;i<=5;i++){
        f2.read((char*)&R,sizeof(R));
        if(s_id==R.st_id){
            cout<<"MATCH FOUND"<<endl;
            R.output();
            break;
        }
    }
    cout<<i<<endl;
    f2.close();
    cout<<"to edit this record enter 1"<<endl;
    cin>>action;
    return(action);
    }
    void edit(c2 &R){
        int pos=1;
    {   ifstream f;
        ofstream f2;
        f2.open("copy_records.txt",ios::out);
        f.open("records1.txt",ios::in);
        for(pos=1;pos<=5;pos++){
            f.read((char*)&R,sizeof(R));
            if(pos==i){
            cout<<"original record that u wanted to edit is"<<endl;
            cout<<st_id<<" "<<name<<" "<<age<<" "<<fathers_name<<" "<<course_name<<endl;
            cout<<"enter st id"<<endl;
            cin>>st_id;
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

            f2.write((char*)&R,sizeof(R));

            }
            else{
                f2.write((char*)&R,sizeof(R));
            }
        }
        f.close();
        f2.close();
    }

    {   ifstream f;
        ofstream f2;
        f.open("copy_records.txt",ios::in);
        f2.open("records1.txt",ios::out);
        for(i=1;i<=5;i++){
            f.read((char*)&R,sizeof(R));
            f2.write((char*)&R,sizeof(R));
        }
        f.close();
        f2.close();
    }
    }
    void output1(c2 &R){
        ifstream f3;
        f3.open("records1.txt",ios::in);
        for(i=0;i<5;i++){
            f3.read((char*)&R,sizeof(R));
            output();
        }

    }
};
int main(){
    c2 R;
    int revert;
    revert=R.search(R);
    if(revert==1){
        R.edit(R);
    }
    R.output1(R);

}