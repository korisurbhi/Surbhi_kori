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

def cal():
    def addition():
        num1 = entry_num1.get()
        num2 = entry_num2.get()
        add = float(num1) + float(num2)
        output.config(text=f"addition is{add}!")

    def subtraction():
        num1 = entry_num1.get()
        num2 = entry_num2.get()
        sub = float(num1) - float(num2)
        output.config(text=f"subtraction is{sub}!")

button_frame = tk.Frame(root)
button_frame.pack(pady=10)

button2 = tk.Button(button_frame,text="sub",command=cal)
button2.pack(side=tk.LEFT, padx=10)

output=tk.Label(root,text="")
output.pack()

root.mainloop()
