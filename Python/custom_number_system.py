class number_system:
    #constructor function
    def __init__(self):
        self.numb=0
        self.base=12
        #array
        self.arr=['☥','🟂','Ӫ','Ü','฿','₲','∇','∮','∍','➿','1','2']
        #result value
        self.result1=''
        self.ns=0
        #decimal to number base 12
    def decimal_to_num(self, dc):
        self.numb=0
        p=len(dc)
        k=0
        for i in range (p-1,-1,-1):
            for j in range(0,12,1):
                if(self.arr[j]==dc[i]):
                    self.numb=self.numb+(j*(pow(self.base,k)))
                    k=k+1
                    break
        print(self.numb)
    #fucntion to enter the value
    def get_num(self):
        self.n=int(input("Enter number you want to convert from decimal to 12 base : "))
        return(self.n)
    # result1=""
    #function to convert from number to decimal
    def num_to_decimal(self,m):
        
        if(m>0):
            y=m%self.base
            m=int(m/self.base)
            self.result1=str(self.arr[y])+self.result1
            self.ns=self.ns+1
            #recursive call
            self.num_to_decimal(m)


#creating object
p1 = number_system()
#calling input function
number=p1.get_num()
p1.result1=""
#checking value whether it is equal to 0 or not
if(number==0):
    p1.result1=p1.arr[0]+p1.result1
    p1.ns=p1.ns+1
else:
    p1.num_to_decimal(number)
#printing results
print("Result from decimal to base 12")
print(p1.result1)
print("Result from base 12 to decimal")
p1.decimal_to_num(p1.result1)
