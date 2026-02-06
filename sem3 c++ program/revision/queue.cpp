#include <iostream>
using namespace std;

int queue[5], n = 5, front = -1, rear = -1;

void insert() {
    int val;
    if (rear == n - 1)
        cout << "Queue Overflow" << endl;
    else {
        if (front == -1) front = 0;
        cout << "Insert the element: ";
        cin >> val;
        rear++;
        queue[rear] = val;
    }
}

void del() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow " << endl;
        return;
    } else {
        cout << "Element deleted: " << queue[front] << endl;
        front++;
    }
}

void display() {
    if (front == -1 || front > rear)
        cout << "Queue is empty" << endl;
    else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}

int main() {
    int ch;
    cout << "1) Insert\n2) Delete\n3) Display\n4) Exit" << endl;
    do {
        cout << "\nEnter choice: ";
        cin >> ch;
        switch (ch) {
            case 1: insert(); break;
            case 2: del(); break;
            case 3: display(); break;
            case 4: cout << "Exit" << endl; break;
            default: cout << "Invalid choice" << endl;
        }
    } while (ch != 4);
    return 0;
}