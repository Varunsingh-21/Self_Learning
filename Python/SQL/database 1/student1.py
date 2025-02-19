import sqlite3
from tkinter import EXCEPTION
class authentication:
    def login_check(self,usrn,passw):
        global at
        try:
            at.execute('''SELECT USERNAME,PASSWORD FROM USERS WHERE USERNAME=(?) AND PASSWORD=(?)''',(usrn,passw))
            f=at.fetchall()
            if(len(f)>0):
                print('LOGIN SUCCESS')
                return(True)
            else:
                print('NO RECORD FOUND')
                return(False)
        except Exception as e:
            print('NO RECORD FOUND')
            return(False)
    def registr(self,u,p):
        global at
        try:
            at.execute('''INSERT INTO USERS(USERNAME,PASSWORD) VALUES(?,?)''',(u,p))
            auth.commit()
            print('REGISTRATION SUCCESSFUL')
        except Exception as o:
            print('SOMETHING WENT WRONG')

class student:
    def __init__(self):
        self.name='abc'
        self.age=12
    def insert1(self,name2,ag2):
        global c
        c.execute('''INSERT INTO STUDENTDATA(STNAME,AGE) VALUES(?,?)''',(name2,ag2))
        conn.commit()
        print("INSERT SUCCESSFULLY")
    def select1(self):
        global c
        c.execute('''SELECT STNAME,AGE FROM STUDENTDATA''')
        records=c.fetchall()
        for j in records:
            print(j[0]," ",j[1])

    def update1(self,name3,age3):
        global c
        try:
            c.execute('''UPDATE STUDENTDATA SET AGE=(?) WHERE STNAME=(?)''',(age3,name3))
            print('UPDATED')
        except Exception as e:
            print(e)
    def delete(self,name4,age4):
        global c
        try:
            c.execute('''DELETE FROM STUDENTDATA WHERE STNAME=(?) AND AGE=(?)''',(name4,age4))
            print('SUCCESSFULLY DELETED')
        except Exception as t:
            print(t)
A=authentication()
auth=sqlite3.connect('authen.db')
at=auth.cursor()
while(True):
    print('ENTER 1 TO LOGIN')
    print('ENTER 2 TO REGISTER')
    choice=int(input('ENTER 3 TO QUIT'))
    if(choice==1):
        usr=input('ENTER USERNAME')
        passw=input('ENTER PASSWORD')
        revert=A.login_check(usr,passw)
        if(revert==True):
            break
        else:
            print('WRONG CREDENTIALS')
    elif(choice==2):
        usr=input('ENTER USERNAME')
        passw=input('ENTER PASSWORD')
        A.registr(usr,passw)
    elif(choice==3):
        exit(0)
    else:
        print('Invalid selection')
S=student()
conn = sqlite3.connect('Studentdata.db')
c = conn.cursor()
while(True):
    print("enter 1 to insert a record")
    print("enter 2 to check a record")
    print("enter 3 to update a record")
    print("enter 4 to delete a record")
    act=int(input("enter 5 to quit"))

    if(act==1):
        name=input("enter name of the student")
        age=int(input('enter age of the student'))
        S.insert1(name,age)
        
    elif(act==2):
        S.select1()
    elif(act==3):
        name=input("enter name of the student whose age you want to to update ")
        new_age=int(input('enter the new age'))
        S.update1(name,new_age)
    elif(act==4):
        name=input('enter the name of the student whose record you want to delete')
        age=int(input('enter the age of the student'))
        S.delete(name,age)
    elif(act==5):
        break
    else:
        print("wrng input")