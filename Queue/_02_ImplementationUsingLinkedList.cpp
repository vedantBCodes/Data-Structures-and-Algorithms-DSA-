#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Queue class
class Queue {
private:
    Node* front; // points to front node
    Node* rear;  // points to rear node

public:
    Queue() {
        front = rear = nullptr;
    }

    // Enqueue operation (insert at rear)
    void enqueue(int x) {
        Node* newNode = new Node(x);

        if (rear == nullptr) {  // first element
            front = rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = newNode;
    }

    // Dequeue operation (remove from front)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow!\n";
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == nullptr) { // queue became empty
            rear = nullptr;
        }

        delete temp;
    }

    // Peek (front element)
    int peek() {
        if (isEmpty()) {
            cout << "Queue is Empty!\n";
            return -1;
        }
        return front->data;
    }

    // Check if empty
    bool isEmpty() {
        return (front == nullptr);
    }

    // Display queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty!\n";
            return;
        }
        cout << "Queue: ";
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Driver code
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    cout << "Front element: " << q.peek() << endl;

    q.dequeue();
    q.display();

    q.enqueue(40);
    q.enqueue(50);
    q.display();

    return 0;
}
