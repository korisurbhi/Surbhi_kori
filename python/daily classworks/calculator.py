import tkinter as tk

root = tk.Tk()
root.title("simple widget example")
root.geometry("300x200")

label_num1 = tk.Label(root, text="Enter number:",font=("Arial",12))
label_num1.pack()

entry_num1= tk.Entry(root, width=25)
entry_num1.pack()

label_num2 = tk.Label(root, text="Enter number:",font=("Arial",12))
label_num2.pack()

entry_num2= tk.Entry(root, width=25)
entry_num2.pack()

def addition():
    num1 = entry_num1.get()
    num2 = entry_num2.get()
    add = int(num1) + int(num2)
    output.config(text=f"addition is {add}.")

def subtraction():
    num1 = entry_num1.get()
    num2 = entry_num2.get()
    sub = int(num1) - int(num2)
    output.config(text=f"subtraction is {sub}.")

def multiplication():
    num1 = entry_num1.get()
    num2 = entry_num2.get()
    mul = int(num1)* int(num2)
    output.config(text=f"Multiplication is {mul}.")

def division():
    num1 = entry_num1.get()
    num2 = entry_num2.get()
    div = int(num1) / int(num2)
    output.config(text=f"division is {div}.")

button_frame = tk.Frame(root)
button_frame.pack(pady=10)

button1= tk.Button(button_frame,text="add",command=addition)
button1.pack(side=tk.LEFT, padx=10)

button2 = tk.Button(button_frame,text="sub",command=subtraction)
button2.pack(side=tk.LEFT, padx=10)

button3 = tk.Button(button_frame,text="mul",command=multiplication)
button3.pack(side=tk.LEFT, padx=10)

button3 = tk.Button(button_frame,text="div",command=division)
button3.pack(side=tk.LEFT, padx=10)

output=tk.Label(root,text="")
output.pack()

root.mainloop()
