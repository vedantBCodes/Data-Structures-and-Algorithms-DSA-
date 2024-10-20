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

void deleteANode(Node* &head,int position)
{
    if(position==1)
    {
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        // Deleting a node
            delete temp;
    }
    else
    {
        int cnt=1;
        Node* current=head;
        Node* previous=NULL;
        while(cnt<position)
        {
            previous=current;
            current=current->next;
            cnt++;
        }
        current->prev=NULL;
        previous->next=current->next;
        current->next=NULL;
        // Deleting a node
            delete current;
    }
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

    cout<<"Linked list before deletion :";
    print(head);
    
    deleteANode(head,4);
    cout<<"Linked list after deletion :";
    print(head);
    return 0;
}