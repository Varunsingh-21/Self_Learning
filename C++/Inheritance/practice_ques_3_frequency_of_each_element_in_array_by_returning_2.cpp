#include<iostream>
using namespace std;
class c1{
    private:
    int arr[10];
    public:
    int i=0;
void input(){
        for(i=0;i<10;i++){
            cout<<"enter value no. "<<i+1<<endl;
            cin>>arr[i];
        }
}
int* output(){
        for(i=0;i<10;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return(arr);

    }
};
class c2:public c1{
    private:
    int frequency;
    int *ar;
    public:
    void fr_count(){
        int n=0;
        int temp;
        frequency=0;
        input();
        ar=output();
        while(1){
        int flag=0;
        for(i=0;i<10;i++){
            if(ar[i]==n){
                n++;
                flag=1;
                break;

            }
        }
        if(flag==0){
            break;
        }
        }
        for(i=0;i<10;i++){
            if(ar[i]==n){
                continue;
            }
            temp=ar[i];

            for(int j=0;j<10;j++){
                if(temp==ar[j]){
                    frequency++;
                    ar[j]=n;
                }
            }
            cout<<"frequency of "<<temp<<" is: "<<frequency<<endl;
            frequency=0;
        }


    }

};
int main(){
    c2 P;
    P.fr_count();
}
