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

void insertANode(Node* &tail , int element ,int data) //here data is the new inserting data and element is the list item after which we are inserting newNode
{
    //If List is empty
    if(tail == NULL)
    {
        Node* newNode=new Node(data);
        tail=newNode;
        newNode->next=newNode;
    }
    else
    {
        //For non-empty list
        //assumming the element is present in the list
        Node* temp=tail;
        while(temp->data!=element)
        {
            temp=temp->next;
        }
        
        //element found
        Node* newNode2=new Node(data);
        newNode2->next=temp->next;
        temp->next=newNode2;
    }
}

void print(Node* &tail)
{
    //For an empty list
    if(tail==NULL)
    {
        cout<<"List is empty";
    }
    Node* temp=tail; //Storing tail address into temp;
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
    cout<<endl;
}

int main() 
{
    Node* tail=NULL;
    
    //Inserting in an empty list
    insertANode(tail,1,2); 
    
    print(tail);
    
    //Inserting in an non-empty list
    insertANode(tail,2,3); 
    insertANode(tail,3,4); 
    insertANode(tail,4,5); 
    
    print(tail);
    
    insertANode(tail,3,6); 
    print(tail);
    
    return 0;
}