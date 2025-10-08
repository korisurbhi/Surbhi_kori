#include <iostream>
using namespace std;

// Node class represents each element in the linked list
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// LinkedList class to manage nodes
class LinkedList {
private:
    Node* head;  // pointer to the first node

public:
    // Constructor
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a new node at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to insert at beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Function to delete a node by value
    void deleteNode(int value) {
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Node deleted successfully.\n";
            return;
        }

        Node* current = head;
        Node* prev = nullptr;

        while (current != nullptr && current->data != value) {
            prev = current;
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Value not found in list.\n";
            return;
        }

        prev->next = current->next;
        delete current;
        cout << "Node deleted successfully.\n";
    }

    // Function to display the list
    void display() {
        Node* temp = head;
        if (temp == nullptr) {
            cout << "List is empty.\n";
            return;
        }

        cout << "Linked List: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};

// Main function
int main() {
    LinkedList list;
    int choice, value;

    do {
        cout << "\n------ Linked List Menu ------\n";
        cout << "1. Insert at beginning\n";
        cout << "2. Insert at end\n";
        cout << "3. Delete node\n";
        cout << "4. Display list\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtBeginning(value);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtEnd(value);
            break;
        case 3:
            cout << "Enter value to delete: ";
            cin >> value;
            list.deleteNode(value);
            break;
        case 4:
            list.display();
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
