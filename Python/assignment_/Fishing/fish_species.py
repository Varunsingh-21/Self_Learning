class AustralianBass:
    MAX_WEIGHT = 4000
    MAX_EATING_WEIGHT = 2500
    NAME = 'Australian Bass'
    LATIN_NAME = 'Macquaria Novemaculeata'
    
    def __init__(self,w):
        self.weight=w
        self.w_in_kg=float(w)/1000
    def is_good_eating(self):
        if(self.weight>500 and self.weight<self.MAX_EATING_WEIGHT):
            return True
        else:
            return False
    def __str__(self):
        s=self.NAME+" "+self.LATIN_NAME+","+"weights "+str(self.w_in_kg)+" kg"
        return(s)

class ShortFinnedEel:
    MAX_WEIGHT = 3000
    MAX_EATING_WEIGHT = 3000
    NAME ="Short Finned Eel"
    LATIN_NAME = 'Anguilla Australis'
    
    def __init__(self,w):
        self.weight=w
        self.w_in_kg=float(w)/1000
    def is_good_eating(self):
        if(self.weight>500 and self.weight<self.MAX_EATING_WEIGHT):
            return True
        else:
            return False
    def __str__(self):
        return(self.NAME+' '+self.LATIN_NAME+","+'weights '+str(self.w_in_kg)+" kg")

class EelTailedCatfish:
    MAX_WEIGHT =6800
    MAX_EATING_WEIGHT = 4000
    NAME ="Eel Tailed Catfish"
    LATIN_NAME = 'Tandanus Tandanus'
    
    def __init__(self,w):
        self.weight=w
        self.w_in_kg=float(w)/1000
    def is_good_eating(self):
        if(self.weight>500 and self.weight<self.MAX_EATING_WEIGHT):
            return True
        else:
            return False
    def __str__(self):
        return(self.NAME+' '+self.LATIN_NAME+","+'weights '+str(self.w_in_kg)+" kg")

class GippslandPerch:
    MAX_WEIGHT =10000
    MAX_EATING_WEIGHT = 6000
    NAME ="Gippsland Perch"
    LATIN_NAME = 'Macquaria Colonorum'
    
    def __init__(self,w):
        self.weight=w
        self.w_in_kg=float(w)/1000
    def is_good_eating(self):
        if(self.weight>500 and self.weight<self.MAX_EATING_WEIGHT):
            return True
        else:
            return False
    def __str__(self):
        return(self.NAME+' '+self.LATIN_NAME+","+'weights '+str(self.w_in_kg)+" kg")

class blackseabass:
    MAX_WEIGHT =7000
    MAX_EATING_WEIGHT = 3500
    NAME ="black sea bass"
    LATIN_NAME = 'Centropristis striata'
    
    def __init__(self,w):
        self.weight=w
        self.w_in_kg=float(w)/1000
    def is_good_eating(self):
        if(self.weight>500 and self.weight<self.MAX_EATING_WEIGHT):
            return True
        else:
            return False
    def __str__(self):
        return(self.NAME+' '+self.LATIN_NAME+","+'weights '+str(self.w_in_kg)+" kg")
        

class swordfish:
    MAX_WEIGHT =8000
    MAX_EATING_WEIGHT =4000
    NAME ="sword fish"
    LATIN_NAME = 'Xiphias gladius'
    
    def __init__(self,w):
        self.weight=w
        self.w_in_kg=float(w)/1000
    def is_good_eating(self):
        if(self.weight>500 and self.weight<self.MAX_EATING_WEIGHT):
            return True
        else:
            return False
    def __str__(self):
        return(self.NAME+' '+self.LATIN_NAME+","+'weights '+str(self.w_in_kg)+" kg")