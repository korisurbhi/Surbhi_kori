print("Welcome to Python Pizza Deliveries!")
size = input("What size pizza do you want? S, M or L: ").upper()
pepperoni = input("Do you want pepperoni on your pizza? Y or N: ").upper()
extra_cheese = input("Do you want extra cheese? Y or N: ").upper()
bill = 0

if size == "S":
    print("Small pizza is for $15")
    bill += 15
    if pepperoni == "Y":
        bill += 2
    elif extra_cheese == "Y":
        bill += 1
elif size == "M":
    print("Medium pizza is for $20 ")
    bill += 20
    if pepperoni == "Y":
        bill += 3
    elif extra_cheese == "Y":
        bill += 1
elif size == "L":
    print("Large pizza is for $25")
    bill += 25
    if pepperoni == "Y":
        bill += 3
    elif extra_cheese == "Y":
        bill += 1
else:
   print("Invalid size Entered.")
   exit()
print(f"Your final bill is: ${bill}")
