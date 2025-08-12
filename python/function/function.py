#1. Function Without parameters

#function declaration
def greet():
    print("Hello! Welcome ot Python.")
#call the function
greet()


#2. Funtion With parameters

#function declaration
def greet(name):
    print("Hello", name)
# call the function
greet("surbhi")


#3. Function with return value

#function declaration
def add(a, b):
    return a + b
#Call the function and print result
result = add (5, 3)
print("Addtion is : ", result)


#4. Function to check Even or Odd

#function declaration
def check_even_odd(number):
    if number % 2 ==0:
        print(f"The number {number} is Even.")
    else:
        print(f"The number {number} is Odd.")
#call the function
check_even_odd(7)
check_even_odd(164)


#5. Function to find Factorial 

#function declaration 
def factorial(n):
    result = 1
    for i in range (1, n+1):
        result *= i
    return result
#call the function
print ("Factorial of 5 is : ", factorial(5))


#6. Function to find Maximum of two numbers

#function declaration
def maximum(x, y):
    if x > y:
        return x
    else:
        return y 
#call the function
print("Maximum is :", maximum(10, 20))


#7. Function to print table of a Number

#function declaration
def print_table(n):
    for i in range (1, 11):
        print(f"{n} * {i} = {n*i}")
#call the function
print_table(5)


#8. Function with default argument 

#function declaration
def greet (name="student"):
    print ("hello", name)

#call the function
greet()         #uses default
greet("surbhi") #uses given value
