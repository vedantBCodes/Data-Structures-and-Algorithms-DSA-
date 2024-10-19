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
    
    /*
    NOTE : Here node1 is a 1st node which is a pointer which store the address of the 1st node
           and if we print node1 like "cout<<node1 ;" then it will return the address of 1st node.
           node1->data returns the value at that address.
           and node1->next returns the address of the next node , in this case it will be NULL
    */
    return 0;
}