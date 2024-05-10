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