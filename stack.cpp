#include <iostream>
#include <cstdlib>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node() 
    {
        next = NULL;
    }
};
//Stack class
class Stack 
{
private:
    Node *top;//pointer to the top node of the stack

public:
    Stack()
    {
        top = NULL; // Initialize the stack with a null top pointer
    }

    //push oporation: insert an element the top of the stack
    int push(int value) 
    {
        Node* newNode = new Node(); //1. Allocate memory for a new node
        newNode->data = value;      //2. assign value
        newNode->next = top;        //3. set the next pointer of the new node to the current
        top = newNode;              //4. update the top pointer to point to the new node
        cout << "Push value: " << value << endl; //
        return value;
    }

    //isEmpty operation: check if the stack is empty
    bool IsEmpty()
    {
        return top == NULL; // return true if the top pointer is null, indicating an empty stack
    }
}