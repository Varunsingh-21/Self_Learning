def app_rec():
    n1=input("enter name of the student")
    a1=int(input("enter age of the stuudent"))
    s1=int(input("enter the scores"))
    st1=n1+','+str(a1)+','+str(s1)
    with open("x.txt","a") as f1:
        f1.write(st1)
        f1.write('\n')
def search__rec():
    n2=input("enter name u want to search")
    temp="1"
    with open("x.txt","r") as f3:
        while(temp!=""):
            temp=f3.readline()
            st=temp.split(',')
            if(st[0]==n2):
                print("MATCH FOUND")
                return(st)
def dis_rec(re):
    p=0
    re[2]=re[2].strip('\n')
    for keys in dic:
        dic[keys]=re[p]
        p+=1
    print(dic)

dic={"name":"","age":"","score":""}
act=int(input("enter 1 to add new record\nenter 2 to search \n enter 3 to delete a rec"))
if(act==1):
    app_rec()
elif(act==2):
    h=search__rec()
    dis_rec(h)
elif(act==3):
    print("LOl")
# with open("x.txt","r") as f:
#     st=f.readline()
# v=st.split(',')
# p=0
# for keys in dic:
#     dic[keys]=v[p]
#     p+=1
# print(dic)
# app_rec()