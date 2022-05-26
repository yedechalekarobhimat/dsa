
import random

ladder = {1:38,4:14,8:13,21:42,28:76,50:67,71:92,80:99 }
snake = {32:10,34:6,48:26,62:18,88:24,95:56,97:78}

pos1 = 0
pos2 = 0

Player1 = input("Player1 enter your name : ")

Player2 = input("Player2 enter your name : ")

print ("\n\n\n")


def move(pos):
    dice = random.randint(1,6)

    print(f"Dice : {dice}")
    pos=pos + dice
    
    if pos in snake:
        print ("Bitten by snake")
        pos = snake[pos]
        print(f"Position:{pos}")

    elif pos in ladder:
        print("Climbed by ladder")
        pos = ladder[pos]
        print(f"Position:{pos}")
    else:
        print(f"Postion:{pos}")
    print ("\n")

    if dice !=6:
        return pos
    else:
        return move(pos)

    

while True:



   
        A= input (Player1+ " press return key to roll the dice:")
        if pos1<=100:
            pos1= move(pos1)

            if pos1==100:
                print("Game over ,"+ Player1+ " wins!")
                print ("\n\n\n")
                break


        
        
        B= input (Player2+ " press return key to roll the dice:")
        if pos2<=100:
            pos2= move(pos2)
    
    
            if pos2==100:
                print("Game over ,"+ Player2+ " wins!")
                print ("\n\n\n")
                break
              

