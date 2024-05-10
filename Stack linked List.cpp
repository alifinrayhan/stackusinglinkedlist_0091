#include <iostream>
using namespace std;


//NOde class reprenting a single node in the linked list
class Node {
public:
    int data;
    Node* next;

    Node() {
        next = NULL;
    }    
};

// Stack Class
class Stack {
private:
    Node* top; // Pointer to the top node of the stack


public:
    Stack() {
        top = NULL; // Initialize the stack with a null top pointer

    } 

    // Push operetion: Insert an element onto the top of the stack
    int push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        cout << "Push value: " << value << endl;
        return value;
    } 

    // Pop operation: Remove the topmost element from the stack
    void pop(){
        if (isEmpty()) {
            cout << "Stack is empty. " << endl;
        }
        cout << "Popped value: " << top->data << endl;
        top = top->next; // Update the top pointer to the next node

    }

    //  peek/Top operation: Retrieve the value of the topmost element without removing it
    void peek() {
        if (top == NULL) {
            cout << "List is Empty. " << endl;
        }
        else {
            Node* current = top;
            while (current != NULL) {
                cout << current->data << "" << endl;
                current = current->next;
            }
            cout << endl;
        } // return the value of the top node
    }

    // IsEmpty operation: Check if the stack is empty
    bool isEmpty() {
        return top == NULL; // Return true if the top pointer is NULL, indicating an Empty stack

    }      
};