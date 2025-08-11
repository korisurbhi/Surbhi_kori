print("Enter numbers for calculation : ")
num1=int(input("Enter 1st number : "))
num2=int(input("Enter 2nd number : "))
sum=num1+num2
sub=num2-num1
multi=num1*num2
div=num1/num2
print("Addition of given number is " , sum)
print("subtraction of given number is " , sub)
print("Multiplication of given number is " , multi)
print("Division of given number is " , div)
if num1%2==0:
    print("1st number is Even")
else:
    print("1st number is Odd")
if num2%2==0:
    print("2nd number is Even")
else:
    print("2nd number is Odd")
