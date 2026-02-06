import mysql.connector 
 
# ---------- DATABASE CONNECTION ---------- 
def create_connection(): 
    return mysql.connector.connect( 
        host="localhost",   # Change if hosted elsewhere 
        user="root",        # Your MySQL username 
        password="root123", # Your MySQL password 
        database="shikha"   # Database we created 
    ) 
 
# ---------- CREATE TABLE ---------- 
def create_table(): 
    conn = create_connection() 
    cursor = conn.cursor() 
    cursor.execute(''' 
        CREATE TABLE IF NOT EXISTS students ( 
            id INT AUTO_INCREMENT PRIMARY KEY, 
            name VARCHAR(100), 
            age INT 
        ) 
    ''') 
    conn.commit() 
    conn.close() 
 
# ---------- CREATE (INSERT) ---------- 
def insert_student(name, age): 
    conn = create_connection() 
    cursor = conn.cursor() 
    cursor.execute("INSERT INTO students (name, age) VALUES (%s, %s)", 
(name, age)) 
    conn.commit() 
    conn.close() 
 
# ---------- READ ---------- 
def fetch_students(): 
    conn = create_connection() 
    cursor = conn.cursor() 
    cursor.execute("SELECT * FROM students") 
    rows = cursor.fetchall() 
    for row in rows: 
        print(row) 
    conn.close() 
 
# ---------- UPDATE ---------- 
def update_student(student_id, new_age): 
    conn = create_connection() 
    cursor = conn.cursor() 
    cursor.execute("UPDATE students SET age=%s WHERE id=%s", (new_age, 
student_id)) 
    conn.commit() 
    conn.close() 
 
# ---------- DELETE ---------- 
def delete_student(student_id): 
    conn = create_connection() 
    cursor = conn.cursor() 
    cursor.execute("DELETE FROM students WHERE id=%s", (student_id,)) 
    conn.commit() 
    conn.close() 
 
# ---------- MAIN PROGRAM ---------- 
if __name__ == "__main__": 
    create_table() 
 
    print("Inserting records...") 
    insert_student("Alice", 21) 
    insert_student("Bob", 22) 
 
    print("\nReading records...") 
    fetch_students() 
 
    print("\nUpdating Bob's age...") 
    update_student(2, 25) 
    fetch_students() 
 
    print("\nDeleting Alice...") 
    delete_student(1) 
    fetch_students()