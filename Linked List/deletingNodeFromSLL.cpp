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

void deleteAnyNode(Node* &head,int position)
{
   if(position==1)
   {
    //   Deleting first node
       Node* temp=head;
       head=head->next;
    //   Free memory of first node
        temp->next=NULL;
        delete temp;
   }
   else
   {
    //   Deleting any middle node
        int cnt=1;
        Node* previousNode=NULL;
        Node* current=head;
        while(cnt<position)
        {
            previousNode=current;
            current=current->next;
            cnt++;
        }
        
        Node* nextNode=current->next;
        previousNode->next=nextNode;
        
     //   Free memory of any middle node  
        current->next=NULL;
        delete current;
   }
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
    Node* head=node1;         //Naming 1st node as head node
    Node* tail=node1; 
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    
    cout<<"Linked list data before deletion :";
    print(head);
    
    cout<<"Linked list data after deletion :";
    deleteAnyNode(head,3);
    print(head);
    
    return 0;
}
