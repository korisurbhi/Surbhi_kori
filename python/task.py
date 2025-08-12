print("welcome to Treasure island.\nYour mission is to Find the Treasure.")
road = input("Choose the Left or Right road : ").upper()
if road == "LEFT":
    print("Good job...\nyou chosen correct Road.\n")
    way = input("Choose to Wait or Swim : ").upper()
    if way == "WAIT":
        print("Great job...\nYou chosen perfect way.\n")
        door = input("Choose one Door from Red , Yellow or blue : ").upper()
    else:
        print("Attacked by trout.\nGame Over")
        exit()
    if door == "RED":
        print("Oopss!!! \nBurned by Fire\nGame Over.")
    elif door == "BLUE":
        print("Your are eaten by beasts.\nGame Over.")
    elif door == "YELLOW":
        print("CONGRATS....\n You Win.")
else:  
    print(" Fall into a hole.\nGame Over")