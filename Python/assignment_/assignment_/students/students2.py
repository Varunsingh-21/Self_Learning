import csv
import os

# stuent records
records=[]

# to insert a record
def insert_record():
    global records
    student_number=int(input('enter student number'))
    student_name=input('enter student name')
    unit_mark=int(input('ENTER UNIT MARKS'))
    student_name=student_name.lower()
    dic={'student_number':'{}'.format(str(student_number)),'student_name':'{}'.format(student_name),'unit_mark':'{}'.format(str(unit_mark))}
    records.append(dic)

# to search a record
def search_record():
    st_num=int(input('enter student number to search'))
    st_name=input('enter student name to search')
    st_name=st_name.lower()
    for rec_dic in records:
        if((int(rec_dic['student_number'])==st_num) or '{}'.format(st_name) in rec_dic['student_name']):
            print(rec_dic)

# to display names along with grades acccording to murdoch's grading system
def grades():
    # (HD-80-100
    # D-70-79
    # C-60-69
    # P-50-59
    # N-<50   )
    for rec_dic in records:
        marks=int(rec_dic['unit_mark'])
        if(marks>=80):
            grade='HD'
        elif(marks>=70):
            grade='D'
        elif(marks>=60):
            grade='C'
        elif(marks>=50):
            grade='P'
        else:
            grade='N'
    for rec_dic in records:
        print(rec_dic['student_name']," ",grade)

# to delete a record
def delete_record():
    st_num=int(input('ENTER THE STUDENT NUMBER TO DELETE THE RECORD'))
    for rec_dic in records:
        if(st_num==(int(rec_dic['student_number']))):
            records.remove(rec_dic)
            break

# function to load from a csv file
def load_from_csv():
    path=input('ENTER PATH OF THE FILE')
    with open(path,'r',newline='') as f3:
            keys=['student_number','student_name','unit_mark']
            reader=csv.DictReader(f3,fieldnames=keys)
            for row in reader:
                presence=False
                for dic_rec in records:
                    if(row==dic_rec):
                        presence=True
                if(presence==False):
                    records.append(row)

# function to save the records in the system to a csv file
def save_to_csv():
    while(True):
        path1=input('ENTER PATH OF THE FILE')
        if os.path.exists(path1):
            print('This file already exist')
            print('------------------------')
            print('Enter 1 to change the file name')
            print('Enter 2 to overwrite file')
            choice=int(input('Enter 3 to cancel the operation'))
            print('------------------------')
            if(choice==1):
                pass
            elif(choice==2):
                with open('{}'.format(path1),'w',newline='') as n:
                    for rec_dic in records:
                        keys=['student_number','student_name','unit_mark']
                        writer = csv.DictWriter(n,fieldnames=keys)
                        writer.writerow(rec_dic)
                break
            elif(choice==3):
                print('OPERATION CANCELLED')
                break
            else:
                print('INVALID CHOICE')
        else:
            with open('{}'.format(path1),'w',newline='') as n:
                for rec_dic in records:
                    keys=['student_number','student_name','unit_mark']
                    writer = csv.DictWriter(n,fieldnames=keys)
                    writer.writerow(rec_dic)
                    print('SUCCESS')
                    break

# reading students.csv when the program begins
try:
    with open('students.csv','r',newline='') as f2:
        keys=['student_number','student_name','unit_mark']
        reader=csv.DictReader(f2,fieldnames=keys)
        for row in reader:
            records.append(row)
        print(records)
except Exception as e:
    print(e)

# option menu
while(True):
    print('ENTER 1 TO ADD DETAILS OF A STUDENT')
    print('ENTER 2 TO SEARCH FOR A STUDENT')
    print('ENTER 3 TO DISPLAY STUDENT NAMES WITH GRADES')
    print('ENTER 4 TO DELETE A STUDENT RECORD')
    print('ENTER 5 TO LOAD RECORDS FROM A CSV FILE')
    print('ENTER 6 TO SAVE RECORDS TO A CSV FILR')
    action=int(input('ENTER 7 TO QUIT'))
    if(action==1):
        insert_record()
    elif(action==2):
        search_record()
    elif(action==3):
        grades()
    elif(action==4):
        delete_record()
    elif(action==5):
        load_from_csv()
        print(records)
    elif(action==6):
        save_to_csv()
    elif(action==7):
        break
    else:
        print('INVALID CHOICE')
