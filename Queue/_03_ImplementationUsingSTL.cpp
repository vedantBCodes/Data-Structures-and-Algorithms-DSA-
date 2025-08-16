#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Enqueue
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl;
    cout << "Rear element: " << q.back() << endl;

    // Dequeue
    q.pop();

    cout << "After pop, front: " << q.front() << endl;

    // Display all elements
    cout << "Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
