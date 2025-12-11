#include<iostream>
#include<cmath>
using namespace std;
void floor_cell(int arr[],int size){
    int smallest_Element=0;
    int max_Of_Smallest=0;
    int largest_Element=0;
    int min_of_largest=0;
    for(int i=0;i<size;i++){
        if(arr[i] > arr[i+1]){
            smallest_Element=arr[i+1];
            max_Of_Smallest=max(max_Of_Smallest,smallest_Element);
        }
        else if(arr[i] < arr[i+1]){
            largest_Element=arr[i+1];
            min_of_largest=min(min_of_largest,largest_Element);
        }
    }
    cout<<"maximum of smallest element :"<<max_Of_Smallest<<endl;
    cout<<"minimum  of largest element :"<<min_of_largest<<endl;
}
int main(){
    int arr[]={5,6,8,9,6,5,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    floor_cell(arr,n);
}




