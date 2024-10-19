#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;  //For next node
    Node* prev;  //For previous node
    
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insertAtHead(Node* &head , Node* &tail , int newData)
{
    Node* temp=new Node(newData);
    if(head==NULL)
    {
       head=temp;
       tail=temp;
    }
    else
    {
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}

void insertAtTail(Node* &head , Node* &tail , int newData)
{
    Node* temp=new Node(newData);
    if(tail==NULL)
    {
       tail=temp;
       head=temp;
    }
    else
    {
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}

void insertAtPosition(Node* & head, Node* &tail, int position, int newData) {
    
    //insert at Start
    if(position == 1) {
        insertAtHead(tail,head, newData);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,head,newData);
        return ;
    }

    //creating a node for d
    Node* newNode = new Node(newData);

    newNode ->next = temp -> next;
    temp -> next -> prev = newNode;
    temp -> next = newNode;
    newNode -> prev = temp;
}
void print(Node* &head)
{
    Node* temp=head;
    while(temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main() 
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    
    cout<<"Linked list before inserting data at any position :";
    print(head);
    
    cout<<"Linked list after inserting data at any position :";

    insertAtPosition(head,tail,3,50);
    print(head);
    return 0;
}