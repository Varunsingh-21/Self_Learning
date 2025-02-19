import tkinter as tk
from turtle import left
win=tk.Tk()
def act1():
    pass
def act2():
    pass
def act3():
    pass
def act4():
    pass
def act5():
    pass
win.geometry("420x320")
menubar=tk.Menu(win)
win.config(menu=menubar)
menu1=tk.Menu(menubar)
menu2=tk.Menu(menubar)
menubar.add_cascade(label="File",menu=menu1)
menu1.add_command(label="New",command=act1)
menu1.add_command(label="Save",command=act2)
menu1.add_command(label="Open",command=act3)
menu1.add_command(label="Exit",command=act4)
menubar.add_cascade(label="Edit",menu=menu2)
menu2.add_command(label="Find",command=act5)
text=tk.Text(win,height=30,width=50)
text.pack(side=tk.LEFT)
scroll=tk.Scrollbar(win,orient=tk.VERTICAL,command=text.yview)
text.config(yscrollcommand=scroll.set)
scroll.pack(side=tk.RIGHT,fill=tk.Y)

# scroll.config(sticky=tk.NS)
win.mainloop()