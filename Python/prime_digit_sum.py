class prime2:
    pr=[]
    def sum1(self,number):
        sum=0
        while(number>0):
            sum=int(sum+int(number%10))
            number=number/10
        return(sum)
    def prime_check(self,n):
        flag=0
        if(n==2):
            return True
        for z in range(2,n,1):
            if(n%z==0):
                flag=1
                return False
        if(flag==0):
            return True
    def input(self):
        self.num1=int(input("enter num"))
    def appending_arr(self):
        for k in range (0,self.num1+1,1):
            result=self.prime_check(k)
            if(result==True):
                self.pr.append(k)
    def display(self):
        print()
        print(self.pr)
    def putting_sum_at_every_place(self):
        l=len(self.pr)
        for x in range (0,l,1):
            s=self.sum1(self.pr[x])
            self.pr[x]=s
P=prime2()
P.input()
P.appending_arr()
P.display()
P.putting_sum_at_every_place()
P.display()