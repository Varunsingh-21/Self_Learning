#include<stdio.h>
int sumevennatural(int,int *);//declaration
int main(){
    int sum=0,n;//try to declare all main variables at once in c
    printf("enter n");
    scanf("%d",&n);
    //while calling a function,it should be defined before (order) calling or there must be a declaration as the program executes from top to bottom
    sumevennatural(n,&sum); //  calling by sending a copy of the variable n and refrence of sum(chng hppnd in the called place will be reflected in the original variable)
    printf("%d",sum);

}
int sumevennatural(int n,int *sum){
    // *sum recieved the adress of the OG sum variable now iot can chng the OG value
    //* == derefrencing operator
    //used to get a value from an adress 
    //eg= if x stores an adress of another variable lets say y then printf("%d",*x) will printg the value of y , and if we operform *x=2 then the value of y will b also chnged as pointers cn acces the og value and cn also chng them 
    int i;
    for(i=0;i<=n;i=i+2){
        
        *sum=*sum+i;
    }
}