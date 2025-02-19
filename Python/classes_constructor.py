class c1:
    def __init__(self):
        self.b=0
        self.c=0
        self.a=0
    def input1(self,a,b):
        self.a=a
        self.b=b
        self.c=self.a+self.b
        print("sum=",self.c)
k=c1()
k.input1(10,2)