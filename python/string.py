print("1. Create and print a string") 

message="Hello, Python!" 
print(message)
print("\n")


print("2. Access characters using index")
   
word = "Python" 
print("First character:", word[0]) 
print("Last character:", word[-1]) 
print("\n")


print("3. String slicing")
text = "Programming" 
print("Slice (0 to 6):", text[0:7]) 
print("\n")


print("4. String concatenation")   
 
first = "Hello" 
second = "World" 
result = first + " " + second 
print(result) 
print("\n")


print("5. String repetition") 
 
word = "Hello " 
print(word * 3) 
print("\n")

 
print("6. Loop through a string") 
  
name = "Attack on titans" 
for letter in name: 
    print(letter) 
print("\n")
 
 
print("7. Check substring")  

sentence = "Python is fun" 
if "fun" in sentence: 
    print("The word 'fun' is present.") 
print("\n")
    
    
print("8. String methods")    

s = "hello world" 
print("Uppercase:", s.upper()) 
print("Capitalized:", s.capitalize()) 
print("Replaced:", s.replace("world", "Python")) 
print("Split:", s.split()) 
print("\n")
 
 
print("9. String length")   

my_str = "Surbhi kori" 
print("Length of string:", len(my_str)) 
print("\n")
 
 
print("10. Reverse a string") 

text = "surbhi" 
reversed_text = text[::-1] 
print("Reversed string:", reversed_text)
print("\n")


print("11. Check if a string is a palindrome")   

word = "madam" 
if word == word[::-1]: 
    print("It's a palindrome") 
else: 
    print("Not a palindrome") 
print("\n")

 
print("12. Count vowels in a string ")

text = "Programming is fun" 
vowels = "aeiouAEIOU" 
count = 0 
for char in text: 
    if char in vowels: 
        count += 1 
print("Number of vowels:", count) 
print("\n")
 
 
print("13. Remove spaces from a string")  

sentence = "  Hello   World  " 
cleaned = sentence.strip() 
print("Trimmed string:", cleaned)
print("\n")


print("14. Check if string is numeric")   

num_str = "12345" 
if num_str.isdigit(): 
    print("It's numeric") 
print("\n")
 
 
print("15. Join a list of strings")   

words = ["Python", "is", "awesome"] 
sentence = " ".join(words) 
print(sentence) 
print("\n")
 
 
print("16. Change case of each character")

text = "Hello World" 
print("Upper:", text.upper()) 
print("Lower:", text.lower()) 
print("Swapcase:", text.swapcase()) 
print("\n")


print("17. Find position of a substring")   
  
line = "Learn Python Programming" 
position = line.find("Python") 
print("Position of 'Python':", position) 
print("\n")
 
 
print("18. Replace multiple characters")  
  
text = "apple, banana, mango" 
new_text = text.replace("a", "*") 
print(new_text) 
print("\n")

 
print("19. Check if string starts or ends with a word")   

line = "Hello, world!" 
print(line.startswith("Hello")) 
print(line.endswith("world!")) 
print("\n")

 
print("20. Count words in a sentence ")   

sentence = "Python is a powerful language" 
word_list = sentence.split() 
print("Number of words:", len(word_list))