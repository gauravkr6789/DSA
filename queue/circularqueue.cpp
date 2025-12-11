#include <iostream>
using namespace std;

class CircularQueue {
    int *arr;
    int size;
    int front;
    int rear;

public:
    CircularQueue(int x) {
        size = x;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return ((front == 0 && rear == size - 1) || ((rear + 1) % size == front));
    }

    bool isEmpty() {
        return front == -1;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % size;
        }
        cout << endl;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Circular queue is full\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = x;
    }

    void pop() {
        if (isEmpty()) {
            cout << "\nYour circular queue is empty, you can't pop any element.\n";
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }
};

int main() {
    CircularQueue cq(5);
    cq.push(10);
    cq.push(20);
    cq.push(30);
    cq.display();

    cq.pop();
    cq.display();

    cq.pop();
    cq.pop();
    cq.pop(); 

    return 0;
}

