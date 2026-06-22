#include<iostream>
using namespace std;

class heap {
public:
    int arr[100];
    int size;

    heap() {
        arr[0] = -1;   // dummy (1-indexed heap)
        size = 0;
    }

    // 🔼 Heapify Up (for insert)
    void heapifyUp(int index) {
        while (index > 1) {
            int parent = index / 2;

            if (arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                break;
            }
        }
    }

    // 🔽 Heapify Down (for delete)
    void heapifyDown(int index) {
        while (index <= size) {
            int left = 2 * index;
            int right = 2 * index + 1;
            int largest = index;

            if (left <= size && arr[left] > arr[largest])
                largest = left;

            if (right <= size && arr[right] > arr[largest])
                largest = right;

            if (largest != index) {
                swap(arr[index], arr[largest]);
                index = largest;
            } else {
                break;
            }
        }
    }

    // Insert function
    void insert(int val) {
        size++;
        arr[size] = val;
        heapifyUp(size);
    }

    // Delete root
    void deletion() {
        if (size == 0) return;

        arr[1] = arr[size];
        size--;

        heapifyDown(1);
    }

    void print() {
        for (int i = 1; i <= size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    heap h;

    h.insert(55);
    h.insert(60);
    h.insert(45);
    h.print();

    h.deletion();
    h.print();
}
