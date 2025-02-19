def roman_convert(n):
    while(n>0):
        if(n>=1000):
            p=char_return(1000)
            print(p,end="")
            n=n-1000
        elif(n>=500):
            p=char_return(500)
            print(p,end="")
            n=n-500
        elif(n>=100):
            p=char_return(100)
            print(p,end="")
            n=n-100


def char_return(d):
    if(d==1000):
        return('A')
    elif(d==500):
        return('B')
    elif(d==100):
        return('C')
    else:
        return('N')

n=int(input("enter n"))
roman_convert(n)
 