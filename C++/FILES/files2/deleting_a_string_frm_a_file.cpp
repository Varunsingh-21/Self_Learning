#include<iostream>
#include<stdio.h>
#include<fstream>
#include<string.h>
#include<process.h>
using namespace std;
int len=0;
class c1{
    private:
    char search[20];
    public:
    int find(){
        char w;
        int k=0;
        int len_find=0;
        int i=0,flag=0,index_in_file;;
        cout<<"enter string u wana find"<<endl;
        gets(search);
        len_find=strlen(search);
        len=len_find;
        ifstream f;
        f.open("f1.txt",ios::in);
        while(!f.eof()){
            index_in_file++;
            f>>w;
            if(search[i]==w){
                k++;
                i++;
            }
            else{
                i=0;
                k=0;
            }
            if(k==len_find){
                cout<<"MATCH FOUND"<<endl;
                flag=1;
                break;
            }
        }
        f.close();
        if(flag==0){
            cout<<"NO MATCH FOUND"<<endl;
            return(-1);
        }
        else{
            return(index_in_file);
        }
    }
    void copy_file(){
        char w;
        {ifstream f;
        ofstream f2;
        f.open("f1.txt",ios::in);
        f2.open("c.txt",ios::out);
        while(f>>w){
            if(f.eof()){
                break;
            }
            // f>>w;
            f2<<w;
        }
        f.close();
        f2.close();
        }        
    }
};
int main(){
    c1 P;
    int index_in_file,count=0;;
    char x[10]="hello";
    char y[10]="how";
    char z[15]="is are you";
    {ofstream f;
    f.open("f1.txt",ios::out);
    f<<x;
    f<<y;
    f<<z;
    f.close();
    }
    index_in_file=P.find();
    if(index_in_file==-1){
        exit(0);
    }
    else{
        P.copy_file();
        int count=1;
        char w;
        {ifstream f;
        ofstream f2;
        f.open("c.txt",ios::in);
        f2.open("f1.txt",ios::out);
        while(f>>w){
            if(f.eof()){
                break;
            }
            // f>>w;
            if(!(count>=index_in_file-len && count<=index_in_file-1)){
                f2<<w;
            }
            count++;
        }
        f.close();
        f2.close();
        }      
    }


}