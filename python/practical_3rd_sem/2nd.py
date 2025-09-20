def divide(a, b): 
    try: 
        result = a / b 
        print("Result:", result) 
    except ZeroDivisionError: 
        print("Error: Cannot divide by zero") 
 
# Base class 
class Person: 
    def __init__(self, name): 
        self.name = name 
 
    def display(self): 
        print("Name:", self.name) 
 
# Derived class (Inheritance) 
class Student(Person): 
    def __init__(self, name, roll_no): 
        super().__init__(name)   # calling parent constructor 
        self.roll_no = roll_no 
 
    def display(self): 
        super().display() 
        print("Roll No:", self.roll_no) 
 
# Creating object 
s1 = Student("Amit", 101) 
 
# Using object to call method 
print("Student Info:") 
s1.display() 
 
# Using the function with valid input 
print("\nDivision with valid input:") 
num1= int(input("Enter number:"))
num2= int(input("Enter number:"))
print(divide(num1, num2))