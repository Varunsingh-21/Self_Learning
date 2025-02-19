import app
import se
import list1
dic={"name":"","age":"","score":""}
act=int(input("enter 1 to add new record\nenter 2 to search \n enter 3 to delete a rec"))
if(act==1):
    app.app_rec()
elif(act==2):
    h=se.search__rec()
    list1.dis_rec(h,dic)
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