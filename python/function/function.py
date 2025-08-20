print("1. Function Without parameters")

#function declaration
def greet():
    print("Hello! Welcome ot Python.")
#call the function
greet()


print("2. Funtion With parameters")

#function declaration
def greet(name):
    print("Hello", name)
# call the function
greet("surbhi")


print("3. Function with return value")

#function declaration
def add(a, b):
    return a + b
#Call the function and print result
result = add (5, 3)
print("Addtion is : ", result)


print("4. Function to check Even or Odd")

#function declaration
def check_even_odd(number):
    if number % 2 ==0:
        print(f"The number {number} is Even.")
    else:
        print(f"The number {number} is Odd.")
#call the function
check_even_odd(7)
check_even_odd(164)


print("5. Function to find Factorial ")

#function declaration 
def factorial(n):
    result = 1
    for i in range (1, n+1):
        result *= i
    return result
#call the function
print ("Factorial of 5 is : ", factorial(5))


print("6. Function to find Maximum of two numbers")

#function declaration
def maximum(x, y):
    if x > y:
        return x
    else:
        return y 
#call the function
print("Maximum is :", maximum(10, 20))


print("7. Function to print table of a Number")

#function declaration
def print_table(n):
    for i in range (1, 11):
        print(f"{n} * {i} = {n*i}")
#call the function
print_table(5)


print("8. Function with default argument")

#function declaration
def greet (name="student"):
    print ("hello", name)

#call the function
greet()         #uses default
greet("surbhi") #uses given value


print("9. Function to Count Vowels in a String")
def count_vowels(text): 
    vowels = "aeiouAEIOU" 
    count = 0 
    for ch in text: 
        if ch in vowels: 
            count += 1 
    return count 
 
print("Vowel count:", count_vowels("Hello World")) 

 
print("10. Function to Check Prime Number")
def is_prime(num): 
    if num <= 1: 
        return False 
    for i in range(2, num): 
        if num % i == 0: 
            return False 
    return True 
 
print("Is 7 prime?", is_prime(7)) 
 

print("11. Function to Calculate Area of Circle")
def area_of_circle(radius): 
    pi = 3.14159 
    return pi * radius * radius 
 
print("Area:", area_of_circle(5)) 
 
 
print("12. Function to Reverse a String")
def reverse_string(s): 
    return s[::-1] 
 
print("Reverse:", reverse_string("Python")) 
 
 
print("13. Function to Convert Celsius to Fahrenheit")
def celsius_to_fahrenheit(celsius): 
    return (celsius * 9/5) + 32 
 
print("Fahrenheit:", celsius_to_fahrenheit(37)) 
 
 
print("14. Function to Sum Elements of a List")
def sum_list(lst): 
    total = 0 
    for item in lst: 
        total += item 
    return total 
 
print("Sum of list:", sum_list([1, 2, 3, 4, 5])) 
 
print("15. Function to Find Length of a String (without using len())")
def string_length(s): 
    count = 0 
    for _ in s: 
        count += 1 
    return count 
 
print("Length:", string_length("Python")) 
 
     
print("16. Function to Check Palindrome ")  
def is_palindrome(s): 
    return s == s[::-1] 
 
print("Is 'madam' a palindrome?", is_palindrome("madam")) 