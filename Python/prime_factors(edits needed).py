n=int(input("enter n"))
for i in range(2,n+1,1):
    if((n%i==0)):        
        flag=0
        for j in range(2,i,1):
            if(i%j==0):
                flag=1
                break
        if(i==2):
            print(i,end=" ")
        else:
            if(flag==0):
                print(i,end=" ")