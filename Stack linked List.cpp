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
    Node* top // Pointer to the top node of the stack


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

    //      
}