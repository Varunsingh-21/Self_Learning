#include<iostream>
#include<string.h>
using namespace std;
class c1{
    private:
    static char ls[40];
    static char ss[20];
    static char ns[30];
    static char rs[20];
    static int i,j,k,lenght_ss,m,p,limit,a;
    public:
    static void find(){
        cout<<"enter the substring you want to find in the larger string"<<endl;
        gets(ss);
        lenght_ss=strlen(ss);
        while(ls[i]!='\0'){
            
        if(ss[0]==ls[i]){
            
        for(j=0;j<lenght_ss;j++){

        if(ss[j]==ls[i]){
            k++;
        }
        else{
            k=0;
            break;
        }
        if(k==lenght_ss){
            cout<<"MATCH FOUND"<<endl;
            p=i;
            limit=i-lenght_ss;
            m=1;
            cout<<"Enter the substring you want to replace it with";
            gets(rs);
            break;
        }
        i++;
            }
            if(m==1){
                break;
            }
        }
        i++;      
        }
    if(m!=1){
        cout<<"NO MATCH FOUND"<<endl;
    }
    if(m==1){
    strcpy(ns,ls);
    i=0;
    k=0;
    j=0;

        while(1){
            if(i==(strlen(ns)+strlen(rs)-strlen(ss))){
                break;
            }


            if(i>limit && i<=(limit+strlen(rs))){
                    ls[i]=rs[j];
                    i++;
                    j++;
            }
            if(i<= limit ||i>(limit+strlen(rs))){
                if(i==(limit+strlen(rs)+1)){
                    k=(limit+strlen(ss)+1);
                }
                ls[i]=ns[k];
                i++;
                k++;
             }

        }
    ls[i]='\0';
    cout<<ls;
    }
    }
};
char c1::ls[40]={"hello mate how are you"};
char c1::ss[20]={"mate"};
char c1::ns[30]={"empty"};
char c1::rs[20]={"replace"};
int c1::i=0;
int c1::j=1;
int c1::k=0;
int c1::lenght_ss=5;
int c1::m=0;
int c1::p=0;
int c1::limit=0;
int c1::a=0;


int main(){
    c1::find();
    return 0;
}