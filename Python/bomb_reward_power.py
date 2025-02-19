ground=[[1,0,2],[1,2,0],[1,1,2],[2,0,1]]
power=0
points=0
i=0
j=0
while(1):
    n=int(input("enter 1 to move row wise \n enter 2 to move column wise\n enter 3 to go dialgonal"))
    if(n==1):
        if(j+1>3):
            print("Cant move rowise anymore")
            continue
        j=j+1

    elif(n==2):
        if(i+1>3):
            print("Cant move column wise anymore")
            continue
        i=i+1
    elif(n==3):
        if(i+1>=3 or j+1>=3):
            print("Cant move diagonally")
            continue
        i=i+1
        j=j+1
    else:
        print("wrong input")
    if(ground[i][j]==1):
        print("point gained")
        points=points+1
        ground[i][j]=3
    elif(ground[i][j]==2):
        print("Accuired Power")
        power=power+1
        ground[i][j]=3
    elif(ground[i][j]==0):
        if(power>0):
            power=power-1
        else:
            print("GAME OVER")
            print("Score=",points)
            break
    else:
        print("Safe Place but 0 gains")
