#1. Define a class 'student' with attributes 'name' and 'roll number'.
class Student:
    def __init__(self, name , roll_no):
        self.name = name
        self.roll_no = roll_no
        
    def display(self):
        print("Name:", self.name)
        print("Roll no.:", self.roll_no)
name=input("enter name: ")
roll_no=int(input("enter roll no: "))
s1=Student(name,roll_no)
s1.display()
