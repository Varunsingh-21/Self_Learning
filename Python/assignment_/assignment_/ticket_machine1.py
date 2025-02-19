system=[]
class TicketMachine:
    total=0
    def __init__(self):
        global system
        self.total=0
        self.price=120
        self.balance=0
        system.append(self)
    def insertMoney(self):
        amount=-1
        while(amount<0):
            amount=int(input('Enter the amount'))
        self.balance=self.balance+amount
    def getPrice(self):
        return self.price
    def printTicket(self):
        if(self.balance>=self.price):
            print('TICKET')
            self.balance=0
            self.total=self.total+self.price
            TicketMachine.total=TicketMachine.total+self.price
        else:
            print('Low Balance')
c1=TicketMachine()
c1.insertMoney()
c1.printTicket()
c1.insertMoney()
c1.printTicket()
c2=TicketMachine()
c2.insertMoney()
c2.getPrice()
c2.printTicket()


