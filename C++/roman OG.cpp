#include<iostream>
using namespace std;
class roman_convert
{   public:
    char y[14][3]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    void num_to_roman(int n)
    {
        int x[13]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        for(int i=12;i>=0;i--)
        {
            while(x[i]<=n)
            {
                cout<<y[i];
                n=n-x[i];
            }
        }
        cout<<endl;
    }
};
int main()
{  int n;
    roman_convert P;
    cout<<"enter number to convert into roman";
    cin>>n;
    P.num_to_roman(n);
}