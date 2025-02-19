import ticket_machine1
class management_system:
    def add_machine(self):
        machine_name=input('enter machine name')
        machine_name=ticket_machine1.TicketMachine()
    def remove_machine(self):
        machine_name=input('enter machine name')
        print('DELETED SUCCESSFULLY')
        ticket_machine1.system.remove(machine_name)
    def see_total_of_one_machine(self,machine_name):
        print(machine_name.total)
    def total_sale(self):
        print('Total sale of all machines is :',ticket_machine1.TicketMachine.total)
def get_all():
    for i in ticket_machine1.system:
        print(i)
c1=ticket_machine1.TicketMachine()
get_all()
print(c1)
c1.insertMoney()
c1.printTicket()
c1.insertMoney()
c1.printTicket()
c2=ticket_machine1.TicketMachine()
get_all()
c2.insertMoney()
c2.printTicket()
kevin=management_system()
kevin.add_machine()
get_all()
kevin.add_machine()
get_all()
kevin.remove_machine()
get_all()

