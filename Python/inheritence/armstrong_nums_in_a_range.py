def digit_count(n):
    d1=0
    if(n==0):
        return(1)
    while(n>0):
        d1=d1+1
        n=(int)(n/10)
    return(d1)
def armstrng_check(num):
    num1=num
    sum=0
    digits_n=digit_count(num1)
    for i in range(0,digits_n,1):
        d=int(num1%10)
        sum=sum+int(pow(d,digits_n))
        num1=num1/10
    if(sum==num):
        return(True)
    else:
        return(False)
def series_arm(till):
    for i in range(0,till+1,1):
        result=armstrng_check(i)
        if(result==True):
            print(i,end=" ")
t=int(input("enter number"))
series_arm(t)