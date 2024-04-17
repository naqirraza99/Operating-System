#include <iostream>
#include <queue>

using namespace std;

class MyQueue {
private:
    queue<int> q;

public:
    // Function to enqueue (push) an element into the queue
    void enqueue(int value) {
        q.push(value);
    }

    // Function to dequeue (pop) an element from the front of the queue
    void dequeue() {
        if (!q.empty()) {
            q.pop();
        } else {
            cout << "Queue is empty. Cannot dequeue." << endl;
        }
    }

    // Function to peek (get the front element) of the queue
    int peek() {
        if (!q.empty()) {
            return q.front();
        } else {
            cout << "Queue is empty. Cannot peek." << endl;
            return -1; // Return a default value or use an exception for better handling
        }
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return q.empty();
    }
};

int main() {
    MyQueue myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    cout << "Front element: " << myQueue.peek() << endl; // Output: Front element: 10

    myQueue.dequeue();

    cout << "Front element after dequeue: " << myQueue.peek() << endl; // Output: Front element after dequeue: 20

    cout << "Is the queue empty? " << (myQueue.isEmpty() ? "Yes" : "No") << endl; // Output: Is the queue empty? No

    return 0;
}

