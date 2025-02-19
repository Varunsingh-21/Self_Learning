def dis_rec(re,dic):
    p=0
    re[2]=re[2].strip('\n')
    for keys in dic:
        dic[keys]=re[p]
        p+=1
    print(dic)
