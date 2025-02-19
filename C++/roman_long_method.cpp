#include<iostream>
#include<math.h>
using namespace std;
class roman_convert
{   public:
    char y[14][3]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    void num_to_roman(int number)
    {
        int x[13]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        int i,l,m=0,other;
        int no_of_digits=0,digit;
        int temp,flag=0;
        temp=number;
        while(1){
            if(number==0){
                break;
            }
            number=number/10;
            no_of_digits++;

        }
        number=temp;
        cout<<no_of_digits<<endl;
        for(i=no_of_digits-1;i>=0;i--){
            digit=number/(int)pow(10,i);
            if(digit>=1 && digit<=3){
                int j;
                for(j=1;j<=digit;j++){
                    l=(int)pow(10,i);
                    while(x[m]!=l){
                        m++;
                    }
                    cout<<y[m];
                    m=0;

                }
            }
            if(digit==4||digit==5||digit==9){
                l=digit*(int)pow(10,i);
                while(l!=x[m]){
                    m++;
                }
                cout<<y[m];
                m=0;
            }
            if(digit>5 && digit<9){
                other=digit-5;
                l=5*pow(10,i);
                while(l!=x[m]){
                    m++;
                }
                cout<<y[m];
                m=0;
                for(int s=1;s<=other;s++){
                    l=pow(10,i);
                    while(l!=x[m]){
                        m++;
                    }
                    cout<<y[m];
                    m=0;
                }


            }
            number=number-(digit*(int)pow(10,i));
        }

    }
};
int main(){
    roman_convert P;
    int n;
    cout<<"enter n";
    cin>>n;
    P.num_to_roman(n);
    return 0;
}