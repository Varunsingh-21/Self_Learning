grades=float(input("Enter Marks"))
if(grades>=90):
    print("A")
else:
    if(grades>=60):
        print("B")
    else:
        if(grades>=40):
            print("C")
        else:
            print("Fail")