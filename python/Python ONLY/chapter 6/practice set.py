# add this in poems.txt first
# twinkle twinkle little star how i wonder what you are up above the world so high like a diamond in the sky

# f=open ('poems.txt')
# t=f.read()
# if 'twinkle' in t:
#     print('twinkle is present')
# else:
#     print('twinkle is not present')




def game():
    a = int(input("enter a number"))
    return a
score=game()
with open("poems.txt") as f:
    highscore = f.read()

if highscore=="":
    with open("poems.txt",'w') as f:
        f.write(str(score))
elif int(highscore) < score :
    with open("poems.txt",'w') as f:
        f.write(str(score))

#add 32 in poems.txt first

f.close()