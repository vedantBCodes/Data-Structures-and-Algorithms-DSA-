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

void insertAtTail(Node* &tail,int newData) 
{
    Node* newNode=new Node(newData);
    tail ->next=newNode;
    tail = newNode;
}

void print(Node* &head)
{
    Node* temp=head; 
    if(head==NULL)
    {
        cout<<"List is empty";
    }
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;   
    }
    cout<<endl;
}

int main() 
{
    Node* node1=new Node(10);  //Created 1st node
    Node* head=node1;          //Naming 1st node as head node
    Node* tail=node1; 
    insertAtTail(tail,20);
    print(head);
    insertAtTail(tail,30);
    print(head);
    return 0;
}
