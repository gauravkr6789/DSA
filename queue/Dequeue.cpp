#include <iostream>
using namespace std;

class DeQueue {
    int *arr;
    int size;
    int front;
    int rear;

public:
    
DeQueue(int x) {
        size = x;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
};