#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;
};

// Linked list class
class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr; // start with empty list
    }

    // Function to insert a new node at the end
    void insert(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode; // first node
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Function to display the linked list
    void display() {
        if (head == nullptr) {
            cout << "List is empty!\n";
            return;
        }

        Node* temp = head;
        cout << "\nLinked List: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

// Main function
int main() {
    LinkedList list;
    int n, value;

    cout << "How many numbers do you want to add? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> value;
        list.insert(value);
    }

    list.display();

    return 0;
}
