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

class management_system:
    def add_machine(self):
        machine_name=input('enter machine name')
        machine_name=TicketMachine()
        return machine_name
    def remove_machine(self,machine):
        system.remove(machine)
        del machine
    def see_total_of_one_machine(self,machine_name):
        print(machine_name.total)
    def total_sale(self):
        print('Total sale of all machines is :',TicketMachine.total)
    def get_all(self):
        for i in system:
            print(i)
c1=TicketMachine()
c1.insertMoney()
c1.printTicket()
c1.insertMoney()
c1.printTicket()
kevin=management_system()
kevin.get_all()
c2=TicketMachine()
c2.insertMoney()
c2.printTicket()
kevin.get_all()
new=kevin.add_machine()
kevin.see_total_of_one_machine(c1)
kevin.see_total_of_one_machine(c2)
kevin.total_sale()
kevin.remove_machine(c1)
# c1.insertMoney()
kevin.get_all()



