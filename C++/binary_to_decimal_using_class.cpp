#include<iostream>
#include<math.h>
using namespace std;
class c1{
    public:

    void digit_count(int number){
        int index_from_left=0;
        float digit,decimal=0;
        while(1){
            if(number==0){
                break;
            }
            digit=number%10;
            decimal=decimal+(pow(2,index_from_left)*digit);
            index_from_left++;
            number=number/10;
        }
        cout<<"decimal value ="<<decimal;


        
    }
};
int main(){
    int n;
    cout<<"enter binary value to convert into decimal"<<endl;
    cin>>n;
    c1 P;
    P.digit_count(n);
    return 0;
}