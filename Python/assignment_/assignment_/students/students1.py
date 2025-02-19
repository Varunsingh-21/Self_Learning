# student records will be stored in this list
records=[]

# inserting new record
def insert_record():
    global records
    student_number=int(input('enter student number'))
    student_name=input('enter student name')
    unit_mark=int(input('ENTER UNIT MARKS'))
    student_name=student_name.lower()
    dic={'student_number':'{}'.format(str(student_number)),'student_name':'{}'.format(student_name),'unit_mark':'{}'.format(str(unit_mark))}
    records.append(dic)
# searching on the basis of student number or name

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

while(True):
    print('ENTER 1 TO ADD DETAILS OF A STUDENT')
    print('ENTER 2 TO SEARCH FOR A STUDENT')
    print('ENTER 3 TO DISPLAY STUDENT NAMES WITH GRADES')
    print('ENTER 4 TO DELETE A STUDENT RECORD')
    action=int(input('ENTER 5 TO QUIT'))
    if(action==1):
        insert_record()
    elif(action==2):
        search_record()
    elif(action==3):
        grades()
    elif(action==4):
        delete_record()
    elif(action==5):
        break
    else:
        print('INVALID CHOICE')
