#include<iostream>
using namespace std;
int secondlargest(int arr[],int n){
    int max1=0, max2=0;
    for(int i=0; i<=n; i++){
        if(arr[i]>max1){
            max2=max1;
            cout<<"max2 -> "<<max2<<endl;
            max1=arr[i];
            cout<<"max1 -> "<<max1<<endl;
        }
        
    }
    return max2;
}
int main(){
    int arr[]={1,5,9,25,15};
    int n=5;
    cout<<"Second largest number is : "<<secondlargest(arr,n);
    
    return 0;
 
}