import sqlite3

auth = sqlite3.connect('authen.db')
a = auth.cursor()
a.execute('''CREATE TABLE USERS(USERNAME VARCHAR(20) UNIQUE NOT NULL,PASSWORD VARCHAR(20) NOT NULL)''')
print('DONE ')