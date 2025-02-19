nl=int(input("enter number of lines"))
fact1=1
fact2=1
fact3=1
for n in range(0,(nl+1),1):
    for l in range(nl,(n-1),-1):
        print(" ",end="")
    for r in range(0,(n+1),1):
        for i in range(1,(n+1),1):
            fact1=fact1*i
        for i in range(1,(r+1),1):
            fact2=fact2*i
        for i in range(1,(n-r+1),1):
            fact3=fact3*i
        result=int(fact1/(fact2*fact3))
        print(" ",result,end="")
        fact1=1
        fact2=1
        fact3=1
    print()


