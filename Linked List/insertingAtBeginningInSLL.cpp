#include <iostream>
using namespace std;

class Node 
{
   public:
   int data;
   Node* next;
   Node(int data)
   {
       this->data=data;
       this->next=NULL;
   }
};

void insertAtBeginning(Node* &head,int newData) //Here we are passing reference of head node because we want to change the actual linked list .(don't want to make a copy)
{
    Node* newNode=new Node(newData);
    newNode ->next=head;
    head = newNode;
}

void print(Node* &head)
{
    Node* temp=head;            //Created a temporary node because we don't want to change 
                               //temp is a pointer that stores the address of 1st node (head)
    if(head==NULL)
    {
        cout<<"List is empty";
    }
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;            //temp->next stores the address of the next node .
    }
    cout<<endl;
}

int main() 
{
    Node* node1=new Node(10);        //Created 1st node
    Node* head=node1;                //Naming 1st node as head node
    insertAtBeginning(head,20);
    print(head);
    return 0;
}
