import os 
 
#  Path to get the current directory  
 
print("Current Working Directory:", os.getcwd()) 
print("Expected File Path:", os.path.abspath("simple.txt")) 
 
 
# a. Append data to a file and display the entire file content 
 
file_name = "simple.txt"

 
# Append mode ('a') to add data 
with open(file_name, 'a') as f: 
    f.write("\nThis is a new line appended to the file.") 
 
# Read and display full file content 
with open(file_name, 'r') as f: 
    content = f.read() 
    print("File Contents:\n") 
    print(content)