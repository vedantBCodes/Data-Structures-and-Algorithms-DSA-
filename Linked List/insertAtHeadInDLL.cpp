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
    
    insertAtHead(head,tail,20);
    print(head);
    return 0;
}