#include<iostream>
using namespace std;
class c1{
    private:
    int arr[10];
    public:
    int i;
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
    int j,k,l,frequency,temp,flag;
    public:

    c2(){
        l=0;
        frequency=0;
        flag=0;
    }
    ~c2(){
        cout<<endl;
        cout<<"memory deallocated";
    }
    void fr_count(){
        int *arr;
        input();
        arr=output();
        int already_sorted[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

        for(i=0;i<9;i++){
		flag=0;
		for(k=0;k<=9;k++){
			if(arr[i]==already_sorted[k]){
				flag=1;
			}			
		}
		if(flag==1){
			continue;
		}
		temp=arr[i];
		for(j=0;j<=9;j++){
			if(temp==arr[j]){
			frequency++;
			}
		}
        cout<<"frequency of "<<arr[i]<<" is: "<<frequency<<endl;
			frequency=0;
			already_sorted[l]=arr[i];
			l++;
		
	}
    }
};
int main(){
    c2 P;
    P.fr_count();
}
