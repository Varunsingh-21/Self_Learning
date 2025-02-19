#include<iostream>
using namespace std;
class addition{
    private:
    float s1,s2,s3,s4,s5,total,percentage;
    public:
    void calculate(){
        cout<<"enter 5 subs";
        cin>>s1>>s2>>s3>>s4>>s5;
        total=s1+s2+s3+s4+s5;
        percentage=total*100/500;
        cout<<"total="<<total<<endl;
        cout<<"percentage"<<percentage;
    }
};
int main(){
    addition K;
    K.calculate();
    return 0;
}