#include<iostream>
#include<stdio.h>
#include<string.h>
#include <ctime>
using namespace std;
class c1{
    private:
    static char seeds[5][10];
    static int prices[5];
    static char search[10];
    static int ed[5];
    static int em[5];
    static int ey[5];
    static int flag[5];
    public:
    static void explist(){
        int pd=1,pm=1,py=1,i=0;
        time_t now = time(0);
        tm *ltm = localtime(&now);
        py=1900 + ltm->tm_year;
        pm=1 + ltm->tm_mon;
        pd=ltm->tm_mday;
        cout<<pd<<" "<<pm<<" "<<py<<endl;
        for(i=0;i<5;i++){
            if((ed[i]<=pd && em[i]<=pm && ey[i]<=py )||em[i]<pm && ey[i]<py||ey[i]<py){
                cout<<seeds[i]<<" "<<prices[i]<<endl;
                flag[i]=0;
            }
        }
    }
    static void find(){
        int i=0;
        cout<<"enter the name of the seed"<<endl;
        gets(search);
        cout<<search;
        for(i=0;i<5;i++){
            if(seeds[i][0]==search[0] && flag[i]==1){
                cout<<seeds[i]<<" "<<"price="<<prices[i]<<endl;
            }
        }
    } 
};
char c1::seeds[5][10]={"abc","bcd","abd","abs","bdo"};
int c1::prices[5]={10,20,30,40,50};
char c1::search[10]={"hello"};
int c1::ed[5]={1,12,30,4,5};
int c1::em[5]={1,12,12,4,5};
int c1::ey[5]={2020,2019,2025,2026,2027};
int c1::flag[5]={1,1,1,1,1};
class authentication{
    private:
    static char id[20];
    static char pass[20];
    public:
    static int check(){
        char id2[20];
        char password[20];
        int wrngf=0;
        while(1){
            if(wrngf==3){
                return 0;
                break;
            }

        cout<<"enter username"<<endl;
        gets(id2);
        cout<<"enter password"<<endl;
        gets(password);
        if((strcmp(id,id2)==0) && (strcmp(pass,password)==0)){
            cout<<"LOGIN SUCCESSFUL"<<endl;
            return 1;
            break;
        }
        else{
            wrngf++;
            cout<<"WRONG CREDENTIALS"<<endl;
        }
        }
    }
};
char authentication::id[20]={"varun"};
char authentication::pass[20]={"nurav"};

int main(){
    int revert=0;
    revert=authentication::check();
    if(revert==1){
    c1::explist();
    c1::find();
    }
    return 0;
}