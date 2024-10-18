#include <iostream>
using namespace std;

class Node  // Node class to represent a node of the linked list
{
    public:
    int data;      // Data field
    Node* next;    // Pointer to the next node
    
    Node(int data) // Creating a constructor to initialize a node
    {
        this->data=data;
        this->next=NULL;
    }
};
int main() 
{
    Node* node1=new Node(10);  //Creating an object of node class dynamically using new keyword
    cout<<node1->data<<endl;   //Displaying data members using array (->) operator .
    cout<<node1->next;
    
    return 0;
}