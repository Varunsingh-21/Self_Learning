n1=int(input("enter the 1st number"))
n2=int(input("enter the 2nd number"))
if(n1>=n2):
    ns=n1
else:
    ns=n2
for i in range(1,ns+1,1):
    if((n1%i==0) and (n2%i)==0):
        hcf=i
print("HCF OF",n1,"AND",n2,"IS",hcf)