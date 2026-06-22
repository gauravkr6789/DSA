#include <iostream>
using namespace std;

class minstack {
public:
    int *array;
    int top;
    int size;

    minstack(int s) {
        size = s;
        array = new int[size];
        top = -1;
    }

    bool isEmpty() {
        return top < 0;
    }

    bool isFull() {
        return top == size - 1;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow\n";
        } else {
            array[++top] = x;
            cout << "Pushed element: " << array[top] << endl;
        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return array[top--];
    }

    int peek() {
        if (isEmpty()) return -1;
        return array[top];
    }

    ~minstack() {
        delete[] array;
    }
};

int main() {
    minstack ms(5);

    ms.push(10);
    ms.push(20);
    ms.push(30);

    cout << "Top element: " << ms.peek() << endl;
}