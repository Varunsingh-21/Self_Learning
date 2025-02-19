import tkinter as tk
from turtle import width
import matplotlib.pyplot as plt
import csv
import mysql.connector

class Users():
    def __init__(self):
        self.parent=tk.Tk()
        self.parent.geometry('280x150')
        self.label1=tk.Label(self.parent,text='Job name').place(x=20,y=35)
        self.entry1=tk.Entry(self.parent,width=28)
        self.entry1.place(x=85,y=30)
        self.search=tk.Button(self.parent,text='Search',command=self.search1)
        self.search.place(x=120,y=70)
        self.parent.mainloop()

    def  applyjob1(self):
        try:
            country_name=self.menu.get()
            person_name=self.entry3.get()
            person_age=int(self.entry4.get())
            phone_number=int(self.entry5.get())
            email_add=self.entry6.get()
            vals=(country_name,person_name,person_age,phone_number,email_add)
            sql="INSERT INTO Applications (APPLIED_COUNTRY,NAME,AGE,PHONE_NUMBER,EMAIL_ADD) VALUES(%s,%s,%s,%s,%s)"
            mydb = mysql.connector.connect(
              host="localhost",
              user="root",
              password="shinh535k",
              database="mydatabase1"
            )
            mycursor = mydb.cursor()
            mycursor.execute(sql,vals)
            mydb.commit()

            
        except Exception as e:
            print(e)
            self.parent2.destroy()
    def reset1(self):
        self.entry2.delete(0,tk.END)
        self.entry3.delete(0,tk.END)
        self.entry4.delete(0,tk.END)
        self.entry5.delete(0,tk.END)
        self.entry6.delete(0,tk.END)

    def plot_bar_graph(self,dic2):
        x1=[]
        y1=[]
        for key,value in dic2:
            x1.append(key)
            y1.append(value)
        if(not(len(x1)==0)):
            plt.bar(x1,y1)
            plt.show()
            self.parent.destroy()
            self.apply_job(x1)
        else:
            self.parent.destroy()
            print('NO MATCHES FOUND')

    def search1(self):
        job_name=self.entry1.get()  
        countries=['US','RU','FR','CA','ES','NG','PT','PL','GB','MX','TR','DE','HU','NY']
        popularity=[0,0,0,0,0,0,0,0,0,0,0,0,0,0]
        a=''
        try:
            with open('DataScientist.csv','r',newline='',encoding='utf-8') as dataset:
                read=csv.reader(dataset,delimiter=',')
                i=0
                for rec in read:
                    if(i==0):
                        i=+1
                        continue
                    if(job_name in rec[2]):
                        for con in countries:
                            if con in rec[7]:
                                index1=countries.index(con,0,14)
                                popularity[index1]=popularity[index1]+1

        except Exception as e:
            print(e)

        dic1=dict(zip(countries,popularity))
        items_to_be_removed=[]
        for key,value in dic1.items():
            if(dic1['{}'.format(key)]==0):
                items_to_be_removed.append(key)
        for item in items_to_be_removed:
            del dic1['{}'.format(item)]
        dic1=sorted(dic1.items(),key=lambda x:(x[1],x[0]))
        print(dic1)
        self.plot_bar_graph(dic1)

    def apply_job(self,country_list):
        print(country_list)
        self.parent2=tk.Tk()
        self.parent2.geometry('420x300')
        self.labelm=tk.Label(self.parent2,text='APPLICATION FORM',font=('Raleway Black',20)).place(x=70,y=10)
        self.label2=tk.Label(self.parent2,text='Applying for (Country)').place(x=17,y=65)
        # self.menu=tk.StringVar()
        self.menu=tk.StringVar(self.parent2)
        self.menu.set("Select Country Name")
        self.drop=tk.OptionMenu(self.parent2,self.menu,*country_list)
        # self.entry2=tk.Entry(self.parent2,width=35)
        # self.entry2.place(x=150,y=65)
        self.drop.place(x=150,y=65)
        label3=tk.Label(self.parent2,text='Name').place(x=17,y=95)
        self.entry3=tk.Entry(self.parent2,width=35)
        self.entry3.place(x=150,y=95)
        label4=tk.Label(self.parent2,text='Age').place(x=17,y=125)
        self.entry4=tk.Entry(self.parent2,width=35)
        self.entry4.place(x=150,y=125)
        label5=tk.Label(self.parent2,text='Phone Number').place(x=17,y=155)
        self.entry5=tk.Entry(self.parent2,width=35)
        self.entry5.place(x=150,y=155)
        label6=tk.Label(self.parent2,text='Email Address').place(x=17,y=185)
        self.entry6=tk.Entry(self.parent2,width=35)
        self.entry6.place(x=150,y=185)
        self.btn2=tk.Button(self.parent2,text='APPLY',command=self.applyjob1,width=10)
        self.btn2.place(x=90,y=245)
        self.btn3=tk.Button(self.parent2,text='Reset',command=self.reset1,width=10)
        self.btn3.place(x=200,y=245)
        self.parent2.mainloop()
class Admin():
    # def __init__(self):
    #     pass 
    def authen(self):
        username='varun21'
        password='nurav31'
        u=input('ENTER Username')
        p=input('Enter PASSWORD')
        if(u==username and p==password):
            mydb = mysql.connector.connect(
            host="localhost",
            user="root",
            password="shinh535k",
            database="mydatabase1"
            )
            sql="SELECT * FROM Applications"
            mycursor = mydb.cursor()
            mycursor.execute(sql)
            p=mycursor.fetchall()
            for x in p:
                print(x)
            return 0
        else:
            return -1
def adm_cr():
    A=Admin()
    r=0
    while(True):
        r=A.authen()
        if(r==-1):
            print('INVALID USERNAME OR PASSWORD')

def usr_cr():
    U=Users()

option=tk.Tk()
option.geometry('280x180')
labelm1=tk.Label(option,text='WELCOME',font=("Courier",30)).place(x=56,y=10)
adm=tk.Button(option,text='Admin',command=adm_cr,width=12).place(x=25,y=95)
usr=tk.Button(option,text='User',command=usr_cr,width=12).place(x=160,y=95)
option.mainloop()


# parent=tk.Tk()
# parent.geometry('280x150')
# label1=tk.Label(parent,text='Job name').place(x=20,y=35)
# entry1=tk.Entry(parent,width=28)
# entry1.place(x=85,y=30)
# search=tk.Button(parent,text='Search',command=A.search1)
# search.place(x=120,y=70)
# parent.mainloop()