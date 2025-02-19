x=int(input("enter year"))
if((x%100)==0 and (x%400)==0):
    print("Leap Year")
else:
    if((x%4)==0):
        print("Leap Year")
    else:
        print("non leap")