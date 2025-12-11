/*#include<iostream>
using namespace std;
int second_max(int arr[],int size){
	int max1=0;
	int max2=0;
	for(int i=0;i<size;i++){
		if(arr[i] > max1){
			max2 =max1;
			max1 =arr[i];
		}
		else if(arr[i] > max2){
			max2=arr[i];
		}	
	}
	return max2; 
}

int main(){
   int arr[]={10,2,11,13,12};
   int size=6;
   cout<<"second max is : "<<second_max(arr,size);
   
}*/
