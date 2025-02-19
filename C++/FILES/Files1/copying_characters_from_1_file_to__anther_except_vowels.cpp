#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class c1{
    private:
    char vowels[10];
    public:
    c1(){
        strcpy(vowels,"aeiou");
    }
    int vowel_check(int z){
        int i=0,n=0;
        while(vowels[i]!='\0'){
            if(vowels[i]==z){
                n=1;
                break;
            }
            i++;
        }
        return(n);
    }
};
int main(){
    c1 P;
    char x;
    {char words [50]="eudieciiewibececececec";
    ofstream f;
    f.open("f1.txt",ios::out);
    f<<words;
    f.close();}

    ofstream f2;
    ifstream f;
    f2.open("f2.txt",ios::out);
    f.open("f1.txt",ios::in);
    int revert=0;
    f>>x;
    while(!f.eof()){
        revert=P.vowel_check(x);
        if(revert==0){
            f2<<x;
        }
    f>>x;
    }
}