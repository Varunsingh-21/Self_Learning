def decimal_to_num(dc):
    numb=0
    p=len(dc)
    k=0
    for i in range (p-1,-1,-1):
        for j in range(0,12,1):
            if(arr[j]==dc[i]):
                numb=numb+(j*(pow(12,k)))
                k=k+1
                break
    print(numb)
def get_num():
    n=int(input("Enter number:"))
    return(n)
# result1=""
def num_to_decimal(m):
    global result1
    global ns
    if(m>0):
        y=m%base
        m=int(m/base)
        result1=str(arr[y])+result1
        ns=ns+1
        num_to_decimal(m)
base=12
ns=0
arr=['☥','🟂','Ӫ','Ü','฿','₲','∇','∮','∍','➿',1,2]
number=get_num()
result1=""
if(number==0):
    result1=arr[0]+result1
    ns=ns+1
else:
    num_to_decimal(number)
print(result1)
decimal_to_num(result1)