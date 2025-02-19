class c1:
    def calculate(self,x,y):
        self.z=x+y
        print("sum=",self.z)
class c2(c1):
    def calculate1(self,a,b):
        self.c=a-b
        print("sub=",self.c)
p=c2()
p.calculate(2,1)
p.calculate1(2,1)
