import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user="root",
  password="shinh535k",
  database="mydatabase1"
)
mycursor = mydb.cursor()

mycursor.execute("CREATE TABLE Applications(APPLICATION_ID INT PRIMARY KEY AUTO_INCREMENT,APPLIED_COUNTRY VARCHAR(20) NOT NULL,NAME VARCHAR(20) NOT NULL,AGE INT NOT NULL,PHONE_NUMBER VARCHAR(10) NOT NULL,EMAIL_ADD VARCHAR(40) NOT NULL)")
