#include <iostream>
using namespace std;

class LinearQueue {
private:
    int front, rear, capacity;
    int* arr;

public:
    LinearQueue(int cap) {
        capacity = cap;
        front = 0;
        rear = -1;
        arr = new int[cap];
    }

    // Enqueue (insert at rear)
    void enqueue(int x) {
        if (rear == capacity - 1) {
            cout << "Queue Overflow!\n";
            return;
        }
        arr[++rear] = x;
    }

    // Dequeue (remove from front)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow!\n";
            return;
        }
        front++;
    }

    // Peek (front element)
    int peek() {
        if (isEmpty()) {
            cout << "Queue is Empty!\n";
            return -1;
        }
        return arr[front];
    }

    // Check empty
    bool isEmpty() {
        return (front > rear);
    }

    // Display
    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty!\n";
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Driver
int main() {
    LinearQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    cout << "Front element: " << q.peek() << endl;

    q.dequeue();
    q.display();

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);  // This will overflow even though space is free
    q.display();

    return 0;
}
