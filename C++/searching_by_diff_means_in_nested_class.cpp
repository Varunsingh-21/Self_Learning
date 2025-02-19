#include<iostream>
#include<string.h>
using namespace std;
class student{
    private:
    int id;
    char name[20];
    int age;
    public:
    class adress{
        private:
        char city[20];
        char state[20];
        char country[20];
        public:
        void input(){
            cout<<"enter city,state and country";
            cin>>city>>state>>country;
        }
        void output(){
            cout<<city<<" "<<state<<" "<<country;
        }
    }a[5];
    
    void get(){
        cout<<"enter id";
        cin>>id;
        cout<<"enter name";
        cin>>name;
        cout<<"enter age";
        cin>>age;
    }
    void show(){
        cout<<id<<" "<<name<<" "<<age<<" ";
    }
    int id_match(int id_find1){
        int i,t;
            if(id_find1==id){
                t= 1;
                // break;
            }
            else{
                t= 0;
            }
            return(t);

    }
    int name_match(char find_name[20]){
        if(strcmp(find_name,name)==0){
            return 1;
        }
        else{
            return 0;
        }

    }
};
int main(){
    int i,n;
    int result;
    student p[5];
    for(i=0;i<5;i++){
        p[i].get();
        p[i].a[i].input();
    }
    cout<<"Enter 1 to search with the help of student id"<<endl<<"Enter 2 to search with the help of student name"<<endl<<"Enter 3 to see the whole list";
    cin>>n;
    switch(n){
        case 1:
                int id_find;
                cout<<"enter student id to search";
                cin>>id_find;
                for(i=0;i<5;i++){
                    result=p[i].id_match(id_find);
                    if(result==1){
                        p[i].show();
                        p[i].a[i].output();
                        break;
                    }
                }
        case 2:
                char find_name[20];
                // int result;
                cout<<"name to search with";
                cin>>find_name;
                for(i=0;i<5;i++){
                    result=p[i].name_match(find_name);
                    if(result==1){
                        p[i].show();
                        p[i].a[i].output();
                        cout<<endl;
                        result=0;
                    }

                }

        case 3:
                for(i=0;i<5;i++){
                    p[i].show();
                    p[i].a[i].output();
                    cout<<endl;
                }



    }


}