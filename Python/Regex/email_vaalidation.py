import re 
temp=input("Enter ur email adress")
z=re.search("^[a-z].*.com$",temp)
y=re.search("\s",temp)
s=re.findall("[@]",temp)
s2=re.findall("[.]",temp)
if(z):
    if(not y):
        if(len(s)==1):
            if(len(s2)==1):
                print("OK")
            else:
                print("multiple .")
        else:
            print("missing @")
    else:
        print("white spaces not allowed")
else:
    print("WRNG")
