import ast
def display_1(set12):
    for i in set12:
        print(i)

dic1={"name":"varun","age":12,"score":99}
dic2={"name":"karan","age":"112","score":"29"}
with open("x.txt","w") as t:
    t.write(str(dic1))
with open("x.txt","r") as r:
    dic3=(r.read())
dic3= ast.literal_eval(dic3)
print(type(dic3))
print(dic3["score"])