#include<iostream>
using namespace std;
void missing(int arr[] ,int n){
	int expected=n*(n+1)/2;
	int actual=0;
	for(int i=0;i<n;i++){
		actual+=arr[i];
	}
	int result=expected-actual;
	cout<<"result : "<<result;
}
int main(){
	int arr[5]={1,2,3,5};
	int n=5;
	missing(arr,n);
}
