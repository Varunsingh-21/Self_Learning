import tkinter as tk
# import matplotlib

def search1():
    job_name=entry1.get()
    # job_place=entry2.get()    
    x_v_y={}
    countries=['US','RU','FR','CA','ES','NG','PT','PL','GB','MX','TR','DE','HU']
    popularity=[0,0,0,0,0,0,0,0,0,0,0,0,0]
    a=''
    with open('DataScienceJobsSalaries.csv','r') as dataset:
        t=dataset.readline()
        while(True):
            t=dataset.readline()
            r=t.split(',')
            # if()


        

parent=tk.Tk()
parent.geometry('280x150')
label1=tk.Label(parent,text='Job name').place(x=20,y=30)
entry1=tk.Entry(parent,width=28)
entry1.place(x=85,y=30)
# label2=tk.Label(parent,text='Place').place(x=20,y=70)
# entry2=tk.Entry(parent,width=28)
# entry2.place(x=85,y=70)
search=tk.Button(parent,text='Search',command=search1)
search.place(x=120,y=70)
parent.mainloop()