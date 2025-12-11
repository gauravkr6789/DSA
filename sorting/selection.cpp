#include<iostream>
using namespace std;
void selection(int arr[],int n){
	int min_index=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i] > arr[min_index]){
			swap(arr[i],arr[min_index]);
			
				
		}
	}
	
}
int main(){
	int arr[]={2,10,1,6,9};
	int n=5;
	cout<<"oringinal array before sorting : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	selection(arr,n);
	
	cout<<endl<<"after sorting array element : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
