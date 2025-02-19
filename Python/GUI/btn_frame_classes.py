import tkinter as Tk
from tkinter import *
from tkinter import ttk
class karl(Frame):
    def __init__(self):
        Tk.Frame.__init__(self)
        self.pack()
        self.master.title('karl')
        self.btn1=Button(self,text='CLICK ME',width=25,command=self.new_window)
        self.btn1.grid(row=0,column=1,columnspan=2,sticky=W+E+S+N)
    def new_window(self):
        self.newwindow=karl2()
class karl2(Frame):
    def __init__(self):
        new=Tk.Frame.__init__(self)
        new=Toplevel(self)
        new.title('new win')
        new.button=Button(text="press",width=25,command=self.close_window)
        new.button.pack()
    def close_window(self):
        self.destroy()
def main():
    s=karl()
    # karl.mainloop()
if __name__=='__main__':
    main()
