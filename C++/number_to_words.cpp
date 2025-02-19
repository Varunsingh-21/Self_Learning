#include<iostream>
#include<string.h>
using namespace std;
class c1{
    public:
    char alpha[30][20]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety","hundred"};
    int nums[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,30,40,50,60,70,80,90,100};

    void num_to_alpha(){
        int i,j=0,k,n=0,temp=0,digit=0,p=1,flag=0;
        cout<<"enter n"<<endl;
        cin>>n;
        temp=n;
        while(1){
            
            if(flag==1){
                break;
            }
        if(n>100){
            digit=n/100;
        while(1){
            if(nums[j]==digit){
                cout<<alpha[j];
                break;
            }
            j++;
        }
        cout<<" hundred ";     
        n=n-(digit*100);  
        j=0;    
            
        }
        else{
            while(j<28){
                if(n==nums[j]){
                    cout<<alpha[j];
                    flag=1;
                    break;
                }
                j++;
            }
            j=0;
            if(flag!=1){
                digit=n/10;
                digit=digit*10;
                while(1){
                    if(digit==nums[j]){
                        cout<<alpha[j]<<" ";
                        break;
                    }
                    j++;

                }
                j=0;
                n=n-digit;
                
            }
        }

        }


    }

};
int main(){
    c1 P;
    P.num_to_alpha();
}