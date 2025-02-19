def palendrome_check(nums):
    if(int(nums)>0):
        temp=nums[::-1]
        if(temp==nums):
            return(True)
        else:
            return(False)
    else:
        return(False)
def prime_check(num):
    f=0
    num=int(num)
    if(num>0):
        if(num==2):
            return(num)
        else:
            for i in range (2,num,1):
                if(num%i==0):
                    f=1
                    break
            if(f==0):
                return(num)
            else:
                return(-1)
    else:
        return(-1)
stng="11,34,99,3,5,13"
stng=stng+'\n'
f=open(r"C:\Users\VARUN\Desktop\Python\FILES1\x.txt","w")
f.write(stng)
f.close()
f2=open(r"C:\Users\VARUN\Desktop\Python\FILES1\x.txt","r")
strq=f2.read()
y=strq.split(',')
f2.close()
# print(y)
prms=""
l=len(y)
g=0
for i in range(0,l,1):
    j=int(y[i])
    result=prime_check(j)
    if(not(result==-1)):
        g=g+1
        if(g==1):
            prms=prms+str(result)
        else:
            prms=prms+','+str(result)
print(prms)
prms=prms+'\n'
g=0
palen=""
for i in range(0,l,1):
    result2=palendrome_check(y[i])
    if(result2==True):
        g=g+1
        if(g==1):
            palen=palen+y[i]
        else:
            palen=palen+','+y[i]
print(palen)
palen=palen+'\n'
f4=open(r"C:\Users\VARUN\Desktop\Python\FILES1\x.txt","a")
f4.writelines([prms,palen])
f4.close()
# f3=open(r"C:\Users\VARUN\Desktop\Python\FILES1\x.txt","a")
# f3.write(prms)
# f3.close()


    # j=int(j)
#     result=prime_check(j)
#     if(not(result==-1)):
#         prms=prms+str(result)+","
# print(prms)

