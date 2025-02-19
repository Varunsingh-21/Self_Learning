#include<iostream>
#include<string.h>
using namespace std;
class c1{
    protected:
    int n;
    public:
    int input(){
        cout<<"enter n"<<endl;
        cin>>n;
        return (n);
    }
};
class c2:public c1{
    private:
    char alpha[10][20];
    public:
    
    c2(){
        strcpy(alpha[0],"zero ");
        strcpy(alpha[1],"one ");
        strcpy(alpha[2],"two ");
        strcpy(alpha[3],"three ");
        strcpy(alpha[4],"four ");
        strcpy(alpha[5],"five ");
        strcpy(alpha[6],"six ");
        strcpy(alpha[7],"seven ");
        strcpy(alpha[8],"eight ");
        strcpy(alpha[9],"nine ");
        
    }
    ~c2(){
        cout<<"memory deallocated"<<endl;
    }
    void digit_to_alpha(){
        if(n==0){
            return;
        }
        //during recurssion only local variables are stacked d should b declared inside the function to make recurssion work properly
            int d=n%10;
            n=n/10;
            digit_to_alpha();
            cout<<alpha[d];
    }

};
int main(){
    c2 P;
    P.input();
    P.digit_to_alpha();

}