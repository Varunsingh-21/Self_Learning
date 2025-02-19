#include<iostream>
using namespace std;
class c1{
    private:
    static int i,r,l,n;
    public:
    static void pascal(){

    int fact1=1,fact2=1,fact3=1;
               
    for(n=0;n<=5;n++)
    {
      for(l=5;l>=n;l--){
        cout<<" ";
      }

    for(r=0;r<=n;r++){

     for(i=1;i<=n;i++){
     fact1=fact1*i;
      }
     for(i=1;i<=r;i++){

     fact2=fact2*i;
      }
     for(i=1;i<=n-r;i++){
     fact3=fact3*i;
      }
     cout<<" "<<fact1/(fact2*fact3);
     fact1=1;
     fact2=1;
     fact3=1;
        
            }
            cout<<endl;
        }
        

    }

};
int c1::i=0;
int c1::r=0;
int c1::l=0;
int c1::n=1;
int main(){
    c1::pascal();
}