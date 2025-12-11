#include<iostream>
using namespace std;
int main(){
	int arr[8]={1,2,2,5,6,8,9,10};
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
		   if(arr[i] == arr[j]){
		   	break;
		   	
		   }
		}
		cout<<arr[i]<<" ";
	}
	
}
