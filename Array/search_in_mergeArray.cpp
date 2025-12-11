#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> mergeArray(int arr1[],int n,int arr2[],int m){
	vector<int>arr3;
	sort(arr1, arr1 + n);
	sort(arr2,arr2+m);
    int left=0;
	int right=0;
	while(left < n && right < m){
		if(arr1[left] <= arr2[right]){
			arr3.push_back(arr1[left++]);	
		}
		else{
			arr3.push_back(arr2[right++]);
		}
	}
	while(left < n){
		arr3.push_back(arr1[left++]);
	}
	while(right < m){
		arr3.push_back(arr2[right++]);
	}
	/*for(int i=0;i<arr3.size();i++){
		cout<<arr3[i]<<" ";
	}*/
     return arr3;
	

}

int find_Element_InTwoArray(int arr1[],int x,int arr2[],int m,int key ){
	vector<int>merge=mergeArray(arr1,x,arr2,m);
	int start=0;
	int end=merge.size()-1;
	
	while(start <= end){
		int mid=(start+end)/2;
		if(merge[mid] == key){
			return mid;
		}
		else if(merge[mid] > key){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return -1;
}
int main(){
	int a1[]={1,10,2,5};
	int a=sizeof(a1)/sizeof(a1[0]);
	int a2[]={2,3,6,7,8};
	int b=sizeof(a2)/sizeof(a2[0]);
	int k=5;
	cout<<find_Element_InTwoArray(a1,a,a2,b,k);
	
}
