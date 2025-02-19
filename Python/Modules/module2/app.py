def app_rec():
    n1=input("enter name of the student")
    a1=int(input("enter age of the stuudent"))
    s1=int(input("enter the scores"))
    st1=n1+','+str(a1)+','+str(s1)
    with open("x.txt","a") as f1:
        f1.write(st1)
        f1.write('\n')