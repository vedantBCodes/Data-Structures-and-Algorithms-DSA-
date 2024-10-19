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
int getLength(Node* &head)
{
    int len=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
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
    print(head);
    return 0;
}