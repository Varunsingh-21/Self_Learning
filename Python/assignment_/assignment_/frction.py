class Fraction:
    def __init__(self, n, d):
        self.numerator = n
        if d==0:
            raise Exception("Denominator cannot be 0")
        else:
            self.denominator = d
    def __str__(self):
        return str(self.numerator)+"/"+str(self.denominator)
    def __add__(self, other):
        f = Fraction(0,1)
        f.numerator = self.numerator * other.denominator + other.numerator * self.denominator
        f.denominator = self.denominator * other.denominator
        return f
    def __sub__(self, other):
        f = Fraction(0,1)
        f.numerator = self.numerator * other.denominator -other.numerator * self.denominator
        f.denominator = self.denominator * other.denominator
        return f
    def __eq__(self, other):
        if self.numerator/self.denominator == other.numerator/other.denominator:
            return True
        else:
            return False
    def fraction_to_float(self):
        d=float(self.numerator)/self.denominator
        return d
    def __truediv__(self,other):
        f=Fraction(0,1)
        f.numerator=self.numerator*other.denominator
        f.denominator=self.denominator*other.numerator
        return f
    def invert(self):
        temp=self.numerator
        self.numerator=self.denominator
        self.denominator=temp
f1 = Fraction(1, 3)
f2 = Fraction(3, 5)
f3 = Fraction(2, 6)
print(f1+f2)
print(f1-f2)
print(f1==f2)
print(f1==f3)
print(f1.fraction_to_float())
print(f1/f2)
f3.invert()
print(f3)
