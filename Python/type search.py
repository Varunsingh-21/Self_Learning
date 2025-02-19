import tkinter as tk
class t1:
    def dis1(self,*args):
        city_name=self.menu.get()
        self.drop.place_forget()
        self.entry.place(x=80,y=20)
        self.entry.delete(0,tk.END)
        self.entry.insert(0,city_name)
        self.btn1.place(x=150,y=18)
    def d2(self):
        self.btn1.place_forget()
        cities=['Bathinda','Delhi','Barnala','New york','Jaipur','Baroda']
        matches=[]
        f=self.entry.get()
        for x in cities:
            if(f in x):
                matches.append(x)
        if(len(matches)>0):
            self.menu=tk.StringVar(self.win)
            self.entry.place_forget()
            self.menu.set(matches[0])
            self.drop=tk.OptionMenu(self.win,self.menu,*matches,command=self.dis1)
            self.drop.place(x=80,y=20)
    def t3(self):
        self.win=tk.Tk()
        self.win.geometry('200x120')
        self.label1=tk.Label(self.win,text='City Name').place(x=10,y=20)
        self.entry=tk.Entry(self.win,width=10)
        self.entry.place(x=80,y=20)
        self.btn1=tk.Button(self.win,text='S',command=self.d2)
        self.btn1.place(x=150,y=18)
        self.win.mainloop()
A=t1()
A.t3()