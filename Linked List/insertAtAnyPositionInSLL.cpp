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

void insertAtBeginning(Node* &head,int newData)
{
    Node* newNode=new Node(newData);
    newNode ->next=head;
    head = newNode;
}

void insertAtTail(Node* &tail,int newData) 
{
    Node* newNode=new Node(newData);
    tail ->next=newNode;
    tail = newNode;
}

void insertAtPosition(Node* &head , Node* &tail ,int position ,int newData) 
{
    //insert at Start
    if(position == 1)
    {
        insertAtBeginning(head, newData);
        return;
    }
    
   Node* temp=head;
   int cnt=1;
   
   if(cnt<position-1)
   {
       temp=temp->next;
       cnt++;
   }
   
    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,newData);
        return ;
    }
    
    //Creating a new node
    Node* newNode=new Node(newData);
    
    //Inserting data at any middle position
    newNode->next=temp->next;
    temp->next=newNode;
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
    
    cout<<"Linked list data before insertion :";
    print(head);
    
    cout<<"Linked list data after insertion :";
    insertAtPosition(head,tail ,3,21);
    print(head);
    
    //The values of head and tail must be correct after insertion
    cout<<"Head node :"<<head->data<<endl;
    cout<<"Tail node :"<<tail->data<<endl;
    
    return 0;
}
