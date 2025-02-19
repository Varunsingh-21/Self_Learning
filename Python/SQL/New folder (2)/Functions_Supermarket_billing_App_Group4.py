#Student Name: Lakhveer Kaur
#Student ID: 500191944
#Student Name: Sukhpreet Kaur
#Student ID: 500199821
#Student Name: Sourav Sharma
#Student ID: 500192081
#Student Name: Ripanjot Kaur
#Student ID: 500195247
#Student Name: Prabhjeet Kaur
#Student ID: 500200951
import sqlite3

def db_table_create():

    try:
        conn = sqlite3.connect('Supermarket_billing_App_Group4_Database.db')
        c = conn.cursor()

        
        c.execute('''CREATE TABLE Group4_Supermarket_Table
             (acno integer, acname text, password text, dob text, address text, acbalance real, lastTranDate text)
             ''')
        print("Database Created")
    except sqlite3.Error as err:
            print("Error",err)
    except Exception as e:
          
        
            print("Sorry, please check, some error occured :", e)
    

def validatePwd (pwd):
    while True:
       if(pwd.isalnum() and len(pwd)>=6 ):
           break
       else:
           print('Wrong password')
           pwd=input("  Please re-enter password:  ")

    
    return pwd


def validateAcno ( acn):
    while True:
       if(len(acn)== 5):
           break
       else:
           print('Wrong account Number')
           acn=input(" Re-enter account Number: ")
    
    return acn

def validateAcName(vacname):
    while True:
       if(len(vacname)>=1):
           break
       else:
           print('Wrong account Name')
           vacname=input("  Please re-enter Name: ")
   
    return vacname

            

def creatAccount():
    
    try:
        conn = sqlite3.connect('Supermarket_billing_App_Group4_Database.db')
        print("\n *10")
        print("Welcome to Super market ")
        print("-----------------------------")

        print("Creating a Supermarket Account")
        print("Please enter required details below : \n")
        
        vacno=input(" Enter Account Number(5 digits):  ")
        vacno=validateAcno(vacno)
        
        vacname=input(" Enter Account holder's Name (should not be empty):  ")
        vacname=validateAcName(vacname)
        
        vpassword=input(" Enter  a password (not less than 5 characters :)  ")
        vpassword=validatePwd(vpassword)

        vdob=input(" Enter date of birth (mm/dd/yyyy) : ")

        vaddr=input(" Enter  Address :)  ")
        
        vbalance= float(input(" Enter the Bill amount : "))

        vLastTrandate= input(" Enter todays's date (mm/dd/yyyy) : ")
  
       
        c = conn.cursor()
    
        
        c.execute("""INSERT INTO Group4_Supermarket_Table (acno , acname , password , dob , address , acbalance ,lastTranDate)
              VALUES (?,?,?,?,?,?,?) """,(vacno,vacname,vpassword,vdob,vaddr,vbalance,vLastTrandate))

        
        conn.commit()

        print("Congratulations!! {0} , you are successfully >>\n\n");
        input("Press enter to return back to Main Menu ");
    
    
    except NameError as e:
       print(" Error :",e )
    except NameError as e:
        print(" Error :",e )
    except ValueError as e:
        print(" Error :",e )
    
    finally: 
        if conn:
            conn.close()
            print("successful")   
    
    return

def displayAll():

    try:
        conn = sqlite3.connect('Supermarket_billing_App_Group4_Database.db')
        c = conn.cursor()

        print("Connected to SQLite")

                
        c.execute("SELECT acno , acname , dob , address , acbalance ,lastTranDate from Group4_Supermarket_Table")
        
        records = c.fetchall()
        
        print("Total rows are:  ", len(records))
        print("Printing each row")

        print("------------------------------------------------------------------------------------------------------------------|")
        print("| AcNO  | Account holder Name     | Date OF Birth| Address                 | Balance   | lastTranDate        |")
        print("-------------------------------------------------------------------------------------------------------------------|")
        
        for col in records:
           
          print( "| {0:3s} |{1:25s} | {2:10s} | {3:25s}| {4:10.2f} |{5:15s} |".format(str(col[0]),str(col[1]),str(col[2]),str(col[3]),col[4],str(col[5])))


        print("--------------------------------------------------------------------------------------------------------------------|")
           
        c.close()
    
    except sqlite3.Error as e:
        print(" Error !!!  ", e)
    except Exception as e: 
        print(" All types of errors  ", e)
        
    finally:
        if conn:
            conn.close()
            print("Database is Closed successfully ")
            
    input("Press any key to go back to main menu ")
   

def searcRec():

    try:
        conn = sqlite3.connect('Supermarket_billing_App_Group4_Database.db')
        c = conn.cursor()

        print("Connected to SQLite")

        vacno=int(input(" Enter the account number to search : "))

        
        c.execute("SELECT acno , acname , dob , address , acbalance ,lastTranDate from Group4_Supermarket_Table where acno="+str(vacno))
        
        records = c.fetchall() 
        
        print("Total rows are:  ", len(records))
        print("Printing each row")

        print("------------------------------------------------------------------------------------------------------------------|")
        print("| AcNO  | Account holder Name     | Date OF Birth| Address                 | Balance   | lastTranDate        |")
        print("-------------------------------------------------------------------------------------------------------------------|")
        
        for col in records:
           
          print( "| {0:3s} |{1:25s} | {2:10s} | {3:25s}| {4:10.2f} |{5:15s} |".format(str(col[0]),str(col[1]),str(col[2]),str(col[3]),col[4],str(col[5])))


        print("--------------------------------------------------------------------------------------------------------------------|")
           
        c.close()
    
    except sqlite3.Error as e:
        print(" Error !!!  ", e)
    except Exception as e: 
        print(" All types of errors  ", e)
        
    finally:
        if conn:
            conn.close()
            print("Database is Closed successfully ")
            
    input("Press any key to go back to main menu ")
  


def updateAccount():

        
    try:
        conn = sqlite3.connect('Supermarket_billing_App_Group4_Database.db')
        c = conn.cursor()

        print("Connected to Database ")

        vacno=int(input(" Enter your account number: "))
       
        c.execute("SELECT acno ,acname, password,  address from Group4_Supermarket_Table where acno="+str(vacno))# all the records will be stored in c
        
        records = c.fetchall()    
        
        print("Total rows are:  ", len(records))
       
        if(len(records)>0):
            for col in records:
                 
                vacno=col[0]
                vacname=col[1]
                vacpassword=col[2]
                vaddress=col[3]
                print(" Welcome " + vacname )
                newAddress=input (" Enter your address(press enter if you do not want to change) :")
                if(len(newAddress)==0):
                    newAddress=vaddress
                newPassword=input (" Enter your new password : (press enter if you do not want to change) :")
                if(len(newPassword)==0):
                    newPassword=vacpassword
                
                
            
                    
                
                c.execute("UPDATE Group4_Supermarket_Table SET password= \'"+ newPassword+ "\' ,address= \'"+ newAddress+ " \' where acno = " + str(vacno))
                
                print(" Your address and password updated :")
                
        else:
            print("Sorry! Account not found ")
                
                  
        c.close()
        conn.commit()
    
    except sqlite3.Error as e:
        print(" Error  ", e)
        
    finally:
        if conn:
            conn.close()
            print("Database is Closed ")
            
    input("Press any key to go back to main menu ")
   
def deleteRec():

    try:
        conn = sqlite3.connect('Supermarket_billing_App_Group4_Database.db')
        c = conn.cursor()

        print("Connected to SQLite")

        vacno=int(input(" Enter the account number to search : "))

        
        c.execute("delete from Group4_Supermarket_Table where acno="+str(vacno))# all the records will be stored in c
        
        
           
        c.close()
    #catching errors   
    except sqlite3.Error as e:
        print(" Error !!!  ", e)
    except Exception as e: 
        print(" All types of errors  ", e)
        
    finally:
        if conn:
            conn.close()
            print("Database is Closed successfully ")
            
    input("Press any key to go back to main menu ")
 
          
