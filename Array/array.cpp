#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of Array : "<<" ";
	cin>>n;
	int arr[n][n];
	cout<<endl<<"Enter the element of array : ";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	cout<<endl<<"Array element are : "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
    cout<<endl<<"after excange zero : ";
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j] == 0){
				arr[i][j] =0;
			}
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
    
}
