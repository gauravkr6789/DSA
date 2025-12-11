#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4};
	int sum=0;
	
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		
		for(int j=i;j<n;j++){
			cout<<endl;
			for(int k=i;k<=j;k++){
				cout<<arr[k]<<" ";
				sum+=arr[k];
				cout<<sum;
				
				
			}
		}
		
	}
}
