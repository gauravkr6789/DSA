#include<iostream>
#include<vector>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0]=-1;
        size=0;
    }
    
    void insert(int val){
        size=size+1;
        int index=size;
        arr[size]=val;
        while(index > 1){
            int parent=index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }

    void deletetion(){
        if(size == 0){
            return;
        }

        arr[1]=arr[size];
        size--;
        int i=1;
        while(i < size){
            int leftIdx=2*i;
            int rightIdx=2*i+1;
            if(leftIdx <= size && arr[leftIdx] > arr[i] ){
                swap(arr[leftIdx],arr[i]);
                i=leftIdx;
            }
            else if(rightIdx <= size && arr[rightIdx] > arr[i]){
                swap(arr[rightIdx],arr[i]);
                i=rightIdx;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }
    void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && arr[left] > arr[largest])
        largest = left;

    if(right < n && arr[right] > arr[largest])
        largest = right;

    if(largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void buildHeap(vector<int>& arr) {
    int n = arr.size();

    for(int i = n/2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

};

int main(){
    heap h;
    h.insert(55);
    h.insert(60);
    h.insert(45);
    h.print();
    h.deletetion();
    h.print();

}

