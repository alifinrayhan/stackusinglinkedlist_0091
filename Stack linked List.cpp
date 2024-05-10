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
           
}