print("Welcome to Python Burger Deliveries!")
type = input("What type of Burger do you want? Veg OR non-veg: ").upper()
patty = input("Do you want extra patty? Y or N: ").upper()
grilled = input("Do you want grilled bun? Y or N: ").upper()
extra_cheese = input("Do you want extra cheese? Y or N: ").upper()
bill = 0

if type == "VEG":
    print("Veg burger is for $15")
    bill += 15
    if patty == "Y":
        bill += 2
    if grilled == "Y":
        bill += 3
    if extra_cheese == "Y":
        bill += 2
elif type == "NON VEG":
    print("Non-Veg burger is for $20")
    bill += 20
    if patty == "Y":
        bill += 2
    if grilled == "Y":
        bill += 3
    if extra_cheese == "Y":
        bill += 2
else:
   print("Invalid size Entered.")
   exit()
print(f"Your final bill is: ${bill}")
