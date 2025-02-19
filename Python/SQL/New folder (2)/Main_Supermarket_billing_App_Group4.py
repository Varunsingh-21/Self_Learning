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
import Functions_Supermarket_billing_App_Group4


def main():

    while (True):


        try:

            print("\n"*5)
            print("      Supermarket_billing_App")
            print("          Supermarket billing App              ")
            print("--------------------------------------")
            print("1. Creating Database Table ")
            print("2. Create an Account     ")
            print("3. Update an Account     ")
            print("4. Display All Accounts           ")
            print("5. Search account    ")
            print("6. Delete Account  ")
            print("7. EXIT     ")
            print("                                 ")
            choice=int( input(" Enter your Option 1,2,3,4,5,6 Enter 7 to exit: "))

            if (choice == 1):
                Functions_Supermarket_billing_App_Group4.db_table_create() 
            elif (choice == 2):
                Functions_Supermarket_billing_App_Group4.creatAccount()
            
                
            elif (choice == 3):
                Functions_Supermarket_billing_App_Group4.updateAccount()
            elif (choice == 4):
                Functions_Supermarket_billing_App_Group4.displayAll()
            elif (choice == 5):
                Functions_Supermarket_billing_App_Group4.searcRec()
            elif (choice == 6):
                Functions_Supermarket_billing_App_Group4.deleteRec()
            else:
                print("Selected Wrong Option")
                
        except Exception as error:
            
            print("Errr:r",error)
                
                    
                
if __name__ == "__main__":
    main()

