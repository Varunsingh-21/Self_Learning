def display(dic1):
    for x in dic1:
        print("Pet id:",x,end=" ")
        s=dic1[x]
        for j in s:
            print(j,s[j],end=" ")
        print()

petInfo={"2467":{"name =":"Fred","breed =":"Poodle","age =":"8"},"3312":{"name =":"Molly","breed =":"Bulldog","age =":"4"},"1654":{"name =":"Spot","breed =":"Irish Terrier","age =":"2"}}
display(petInfo)