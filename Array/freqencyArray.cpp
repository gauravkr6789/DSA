/*#include <iostream>
using namespace std;

void frequencyCount(int arr[], int size) {
    int max = 0;
    
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    
    int* freq = new int[max + 1]();  
    
    
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
		
    }
    
    
    for (int i = 0; i <= max; i++) {
        if (freq[i] != 0) {
            cout << i << " appears " << freq[i] << " times\n";
        }
    }
    
	delete[] freq;  
    
     
}

int main() {
    int arr[] = {1, 1, 1, 1, 2};
    int size = 5;
    
    frequencyCount(arr, size);
    
    return 0;
}*/













