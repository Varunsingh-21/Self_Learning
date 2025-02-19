from platform import java_ver


class factors:
    def input1(self):
        self.n=int(input("Enter number"))
        return(self.n)
    def prime_factors(self,num):
        self.j=2
        while(num>0):
            while(num%(self.j)==0):
                print(self.j)
                num=num/self.j
            self.j=self.j+1 
P=factors()
t=P.input1()
P.prime_factors(t)