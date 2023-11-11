import random

def Gamewin(Comp, You):
    if Comp == You:
        return None
    elif Comp == 'S':
        if You == 'P':
            return True
        elif You == 'C':
            return False   
    elif Comp == 'P':
        if You == 'C':
            return True
        elif You == 'S':
            return False
    elif Comp == 'C':
        if You == 'S':
            return True
        elif You == 'P':
            return False


print("Comp turn: Stone(S) Paper(P) or scissor(C)?")
randomNo = random.randint(1,3)
#randomNo = random.randint(1,3) is used to generate random number between 1 and 3, it is a function of random module

if randomNo == 1:
    Comp = 'S'
elif randomNo == 2:
    Comp = 'P'
elif randomNo == 3:
    Comp = 'C'

You = input("Yours turn: Stone(S) Paper(P) or scissor(C)?")
a = Gamewin(Comp, You)

print(f"Computer chose {Comp}")
print(f"You chose {You}")
if a == None:
    print("The game is a tie!")
elif a:#a==True
    print("You Win!")
else:
    print("You Lose!")