from tkinter import *
def add_task():
    task = entry.get()
    if task:
        listbox.insert(END, task)
        entry.delete(0, END)
def delete_task():
    try:
        index = listbox.curselection()[0]
        listbox.delete(index)
    except:
        pass
root = Tk()
root.title("To-Do List App")
entry = Entry(root, width=30)
entry.pack(pady=5)
Button(root, text="Add Task", command=add_task).pack(pady=5)
Button(root, text="Delete Task", command=delete_task).pack(pady=5)
listbox = Listbox(root, width=40)
listbox.pack(padx=10, pady=10)
root.mainloop()