import tkinter as tk

# from matplotlib.pyplot import text
def sub():
    global entry1,entry2,entry3,entry4
    b=int(entry1.get())
    d=int(entry2.get())
    hr=int(entry3.get())
    g=int(b+((d*b)/100)+((hr*b)/100))
    entry4.delete(0,tk.END)
    entry4.insert(0,g)
    

parent=tk.Tk()
parent.geometry("400x250")
basic=tk.Label(parent,text='basic')
basic.place(x=30,y=50)
da=tk.Label(parent,text='DA(%)')
da.place(x=30,y=90)
hra=tk.Label(parent,text='HRA(%)')
hra.place(x=30,y=130)
gross=tk.Label(parent,text='Gross')
gross.place(x=30,y=170)
entry1=tk.Entry(parent)
entry1.place(x=85,y=50)
entry1.insert(0,'0')
entry2=tk.Entry(parent)
entry2.place(x=85,y=90)
entry2.insert(0,'0')
entry3=tk.Entry(parent)
entry3.place(x=85,y=130)
entry3.insert(0,'0')
entry4=tk.Entry(parent)
entry4.place(x=85,y=170)
entry4.insert(0,'0')
submitb=tk.Button(parent,text='submit',command=sub).place(x=120,y=210)
parent.mainloop()
