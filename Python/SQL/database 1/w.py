import sqlite3

auth = sqlite3.connect('Studentdata.db')
a = auth.cursor()
a.execute('''CREATE TABLE STUDENTDATA(STNAME VARCHAR(20) UNIQUE NOT NULL,AGE INT NOT NULL)''')
print('DONE ')