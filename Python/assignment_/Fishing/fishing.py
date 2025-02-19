import fish_species
import random
import time
import matplotlib.pyplot as plt
import pickle

fishes=['AustralianBass','ShortFinnedEel','EelTailedCatfish','GippslandPerch','blackseabass','swordfish']
def save_basket(basket, file_name):
    with open('{}'.format(file_name),'wb') as file:
        pickle.dump(basket,file)

def load_basket(file_name):
    with open('{}'.format(file_name),'rb') as file:
        basket1=pickle.load(file)

    for x in basket1:
        print(x)

        
    
def plot_basket(basket):
    fish_names=['Australian Bass','Short Finned Eel',"Eel Tailed Catfish","Gippsland Perch","black sea bass","sword fish"]
    weights=[0,0,0,0,0,0]
    for x in basket:
        i=fish_names.index(x.NAME,0,6)
        weights[i]=weights[i]+(float(x.weight)/1000)
    print(weights)
    plt.figure(figsize=(10,7))
    plt.bar(fish_names,weights)
    plt.xlabel("Fish Species")
    plt.ylabel("Weights (in kgs)")
    plt.show()
    


def start_fishing():
    basket=[]
    basket_weight=0
    while(basket_weight<25000):
        f=random.choice(fishes)
        if(f=='AustralianBass'):
            w=random.randrange(0,fish_species.AustralianBass.MAX_WEIGHT)
            obj=fish_species.AustralianBass(w)
        elif(f=='ShortFinnedEel'):
            w=random.randrange(0,fish_species.ShortFinnedEel.MAX_WEIGHT)
            obj=fish_species.ShortFinnedEel(w)
        elif(f=='EelTailedCatfish'):
            w=random.randrange(0,fish_species.EelTailedCatfish.MAX_WEIGHT)
            obj=fish_species.EelTailedCatfish(w)
        elif(f=='GippslandPerch'):
            w=random.randrange(0,fish_species.GippslandPerch.MAX_WEIGHT)
            obj=fish_species.GippslandPerch(w)
        elif(f=='blackseabass'):
            w=random.randrange(0,fish_species.blackseabass.MAX_WEIGHT)
            obj=fish_species.blackseabass(w)
        else:
            w=random.randrange(0,fish_species.swordfish.MAX_WEIGHT)
            obj=fish_species.swordfish(w)
        result=obj.is_good_eating()
        if(result==True):
            basket_weight=basket_weight+obj.weight
            print(obj,end='')
            print('-Added to the basket')
            basket.append(obj)
        else:
            print(obj,end='')
            print('-released')
        # time.sleep(1)
    return(basket)

basket=start_fishing()
plot_basket(basket)
save_basket(basket,'basket.txt')
load_basket('basket.txt')