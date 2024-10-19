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
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
int main() 
{
    Node* node1=new Node(10);
    Node* head=node1;
    print(head);
    
    int len=getLength(head);
    cout<<"Length of a given linked list is :"<<len<<endl;
    return 0;
}