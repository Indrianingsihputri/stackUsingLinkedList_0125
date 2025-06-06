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

        //pop operation: remove the top element from the stack
    void pop()
    {
        Node *temp = top; // Create a temporary pointer to the top node
        if (IsEmpty()) 
        {
            cout << "Stack is empty, " << endl;
            return; // if the stack is empty, print a message and return
        }
        cout << "Popped value: " << top->data << endl;
        top = top->next; // Update the top pointer to the next node
        temp = NULLptr; //free the memory of the popped node
    }

        //peek/top operation: return the value of the topmost element without removing it
    void peek() 
    {
        if (IsEmpty()) 
        {
            cout << "List is empty " << endl;
            return; //if the stack is empty, print a message and return
        }
        else
        {
        Node *current = top; //
        while (current != NULL) 
            {
                cout << current->data << " " << endl; //
                current = current->next;
            } 
            cout << endl;
        }//return the value of the top node
    }
};

int main() 
{
    Stack stack;

    int choice = 0;
    int value;
    
    while (choice != 4) 
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
    

    switch (choice) 
    {
    case 1:
        cout << "Enter value to push: ";
        cin >> value;
        stack.push(value); //Push the entered value onto the stack
        break;

    case 2:
        stack.pop(); //Pop the topmost element from the stack
        break;
    
    case 3:
        stack.peek();
        break;

    case 4:
        cout << "Exiting program" << endl;
        break;

    default:
        cout << "Invalid choice, try again." << endl;
    }

    cout << endl;
}
    return 0; // Return 0 to indicate successful execution
}