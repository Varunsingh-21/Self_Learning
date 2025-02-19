def search_r(name1):
    l=len(name1)
    name1=name1[0:(l-1)]
    in1=0
    m="1"
    with open("x.txt","r") as s1:
        while(not(m=="")):
            # print("LOl")
            m=s1.readline()
            # print(m)
            if((int(in1%3))==0):
                if(m==name1):
                    print("MATCH FOUND\n")
                    print("SIMILAR RECORDS ARE")
                    for u in range(in1,in1+3,1):
                        print(m,end="")
                        m=s1.readline()
            in1=in1+1

rec1="rohan\n21\n1maur\n"
rec2="varun\n20\n1maur\n"
rec3="karan\n24\n1maur\n"
with open("x.txt","w") as file:
    file.writelines([rec1,rec2,rec3])
    file.close()
r="1"
with open("x.txt","r") as f2:
    while(not(r=="")):
        r=f2.readline()
        print(r,end="")
# print("enter 1 to find with name")
# print("enter 2 to delete a rec")
# print("enter 3 to add a rec")
result=int(input("enter 1 to find with name\nenter 2 to delete a rec\nenter 3 to add a rec"))
if(result==1):
    sname=input("Enter the name u want to search")
    # sname=sname+"\n"
    search_r(sname)

# elif():

# elif():

# else: