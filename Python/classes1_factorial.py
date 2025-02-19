from msilib.schema import PublishComponent


class factorial:
    def calculate(self,n):
        self.n=n
        self.fact=1
        for i in range (1,(self.n)+1,1):
            self.fact=self.fact*i
        return(self.fact)
P=factorial()
t=P.calculate(3)
print(t)


