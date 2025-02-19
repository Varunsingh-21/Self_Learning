#include<iostream>
using namespace std;
class c1{
    private:
    static char name[20];
    static char vowels[6];
    static int count;
    static int i,j;
    public:
    static void get(){
        cout<<"enter name";
        cin>>name;
        cout<<name;
    }
    static void vcount(){
        i=0;
        while(name[i]!='\0'){
            for(j=0;j<5;j++){
                if(name[i]==vowels[j]){
                    count++;
                }
            }
            i++;
        }
        cout<<count;
        
    }
};
char c1::vowels[6]={'a','e','i','o','u'};
int c1::count=0;
int c1::i=0;
int c1::j=0;
char c1::name[20]={"hello"};
int main(){
    c1::get();
    c1::vcount();

    
}
