import json
class student:
    def __init__(self):
        self.name='a'
        self.age='0'
        self.surname='b'
    def input1(self,name,age,surname):
        self.name=name
        self.age=age
        self.surname=surname
    def j_cn(self):
        x=json.dumps(self.name)
        y=json.dumps(str(self.age))
        z=json.dumps(self.surname)
        d=x+','+y+','+z
        return(d)
def main():
    s=student()
    s.input1('varun',18,'shinh')
    k=s.j_cn()
    json.dumps(k)
    print('success')
if __name__=="__main__":
    main()
